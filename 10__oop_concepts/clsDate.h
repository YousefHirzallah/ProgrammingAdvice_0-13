#pragma warning(disable : 4996)
#pragma once

#include<iostream>
#include<string>
#include "clsString.h"

using namespace std;

class clsDate
{
private:

	short _Day = 1;
	short _Month = 1;
	short _Year = 1900;

public:

	clsDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		_Day = now->tm_mday;
		_Month = now->tm_mon + 1;
		_Year = now->tm_year + 1900;
	}

	clsDate(string sDate)
	{
		
		vector <string> vDate;
		vDate = clsString::Split(sDate, "/");

		_Day = stoi(vDate[0]);
		_Month = stoi(vDate[1]);
		_Year = stoi(vDate[2]);

	}

	clsDate(short Day, short Month, short Year)
	{
		this->_Day = Day;
		this->_Month = Month;
		this->_Year = Year;
	}

	clsDate(short DateOrderIn_Year, short _Year)
	{

		clsDate Date1 = GetDateFrom_DayOrderIn_Year(DateOrderIn_Year, _Year);
	    _Day = Date1._Day;
		_Month = Date1._Month;
		_Year = Date1._Year;
	}

	void Set_Day(short _Day) {
		this->_Day = _Day;
	}

	short Get_Day() {
		return _Day;
	}


	void Set_Month(short _Month) {
		this->_Month = _Month;
	}

	short Get_Month() {
		return _Month;
	}



	void Set_Year(short _Year) {
		this->_Year = _Year;
	}

	short Get_Year() {
		return _Year;
	}


   void Print()
	{
		cout << DateToString() << endl;
	}

	static clsDate GetSystemDate()
	{

		time_t t = time(0);
		tm* now = localtime(&t);

		short _Day, _Month, _Year;

		_Year = now->tm_year + 1900;
		_Month = now->tm_mon + 1;
		_Day = now->tm_mday;


		return clsDate(_Day, _Month, _Year);
	}

    static	bool IsValidDate(clsDate Date)
	{

		if (Date._Day < 1 || Date._Day>31)
			return false;

		if (Date._Month < 1 || Date._Month>12)
			return false;

		if (Date._Month == 2)
		{
			if (isLeap_Year(Date._Year))
			{
				if (Date._Day > 29)
					return false;
			}
			else
			{
				if (Date._Day > 28)
					return false;
			}
		}

		short _DaysIn_Month = NumberOf_DaysInA_Month(Date._Month, Date._Year);

		if (Date._Day > _DaysIn_Month)
			return false;

		return true;

	}
	
	bool IsValid()
	{
		return IsValidDate(*this);
	}

	static string DateToString(clsDate Date)
	{
		return  to_string(Date._Day) + "/" + to_string(Date._Month) + "/" + to_string(Date._Year);
	}

    string DateToString()
	{
		return  DateToString(*this);
	}

	static bool isLeap_Year(short _Year)
	{
		return (_Year % 4 == 0 && _Year % 100 != 0) || (_Year % 400 == 0);
	}

	bool isLeap_Year()
	{
		return isLeap_Year(_Year);
	}

	static short NumberOf_DaysInA_Year(short _Year)
	{
		return isLeap_Year(_Year) ? 366 : 365;
	}

	short NumberOf_DaysInA_Year()
	{
		return  NumberOf_DaysInA_Year(_Year);
	}

	static short NumberOfHoursInA_Year(short _Year)
	{
		return  NumberOf_DaysInA_Year(_Year) * 24;
	}

	short NumberOfHoursInA_Year()
	{
		return  NumberOfHoursInA_Year(_Year);
	}

	static int NumberOfMinutesInA_Year(short _Year)
	{
		return  NumberOfHoursInA_Year(_Year) * 60;
	}

	int NumberOfMinutesInA_Year()
	{
		return  NumberOfMinutesInA_Year(_Year);
	}

	static int NumberOfSecondsInA_Year(short _Year)
	{
		return  NumberOfMinutesInA_Year(_Year) * 60;
	}

	int NumberOfSecondsInA_Year()
	{
		return  NumberOfSecondsInA_Year();
	}

	static short NumberOf_DaysInA_Month(short _Month, short _Year)
	{

		if (_Month < 1 || _Month>12)
			return  0;

		int _Days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		return (_Month == 2) ? (isLeap_Year(_Year) ? 29 : 28) : _Days[_Month - 1];

	}

	short NumberOf_DaysInA_Month()
	{
		return NumberOf_DaysInA_Month(_Month, _Year);
	}

	static short NumberOfHoursInA_Month(short _Month, short _Year)
	{
		return  NumberOf_DaysInA_Month(_Month, _Year) * 24;
	}

	short NumberOfHoursInA_Month()
	{
		return  NumberOf_DaysInA_Month(_Month, _Year) * 24;
	}

	static int NumberOfMinutesInA_Month(short _Month, short _Year)
	{
		return  NumberOfHoursInA_Month(_Month, _Year) * 60;
	}

	int NumberOfMinutesInA_Month()
	{
		return  NumberOfHoursInA_Month(_Month, _Year) * 60;
	}

	static int NumberOfSecondsInA_Month(short _Month, short _Year)
	{
		return  NumberOfMinutesInA_Month(_Month, _Year) * 60;
	}

	int NumberOfSecondsInA_Month()
	{
		return  NumberOfMinutesInA_Month(_Month, _Year) * 60;
	}

	static short _DayOfWeekOrder(short _Day, short _Month, short _Year)
	{
		short a, y, m;
		a = (14 - _Month) / 12;
		y = _Year - a;
		m = _Month + (12 * a) - 2;

		return (_Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}

	short _DayOfWeekOrder()
	{
		return _DayOfWeekOrder(_Day, _Month, _Year);
	}

	static string _DayShortName(short _DayOfWeekOrder)
	{
		string arr_DayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

		return arr_DayNames[_DayOfWeekOrder];

	}

	static string _DayShortName(short _Day, short _Month, short _Year)
	{

		string arr_DayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

		return arr_DayNames[_DayOfWeekOrder(_Day, _Month, _Year)];

	}

	string _DayShortName()
	{

		string arr_DayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

		return arr_DayNames[_DayOfWeekOrder(_Day, _Month, _Year)];

	}

	static string _MonthShortName(short _MonthNumber)
	{
		string _Months[12] = { "Jan", "Feb", "Mar",
						   "Apr", "May", "Jun",
						   "Jul", "Aug", "Sep",
						   "Oct", "Nov", "Dec"
		};

		return (_Months[_MonthNumber - 1]);
	}

	string _MonthShortName()
	{

		return _MonthShortName(_Month);
	}

	static void Print_MonthCalendar(short _Month, short _Year)
	{
		int NumberOf_Days;


		int current = _DayOfWeekOrder(1, _Month, _Year);

		NumberOf_Days = NumberOf_DaysInA_Month(_Month, _Year);

		
		printf("\n  _______________%s_______________\n\n",
			_MonthShortName(_Month).c_str());

		
		printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

		
		int i;
		for (i = 0; i < current; i++)
			printf("     ");

		for (int j = 1; j <= NumberOf_Days; j++)
		{
			printf("%5d", j);


			if (++i == 7)
			{
				i = 0;
				printf("\n");
			}
		}

		printf("\n  _________________________________\n");

	}

	void Print_MonthCalendar()
	{
		Print_MonthCalendar(_Month, _Year);
	}

	static void Print_YearCalendar(int _Year)
	{
		printf("\n  _________________________________\n\n");
		printf("           Calendar - %d\n", _Year);
		printf("  _________________________________\n");


		for (int i = 1; i <= 12; i++)
		{
			Print_MonthCalendar(i, _Year);
		}

		return;
	}

	void Print_YearCalendar()
	{
		printf("\n  _________________________________\n\n");
		printf("           Calendar - %d\n", _Year);
		printf("  _________________________________\n");


		for (int i = 1; i <= 12; i++)
		{
			Print_MonthCalendar(i, _Year);
		}

		return;
	}

	static short _DaysFromTheBeginingOfThe_Year(short _Day, short _Month, short _Year)
	{


		short Total_Days = 0;

		for (int i = 1; i <= _Month - 1; i++)
		{
			Total_Days += NumberOf_DaysInA_Month(i, _Year);
		}

		Total_Days += _Day;

		return Total_Days;
	}

	short _DaysFromTheBeginingOfThe_Year()
	{


		short Total_Days = 0;

		for (int i = 1; i <= _Month - 1; i++)
		{
			Total_Days += NumberOf_DaysInA_Month(i, _Year);
		}

		Total_Days += _Day;

		return Total_Days;
	}

	static clsDate GetDateFrom_DayOrderIn_Year(short DateOrderIn_Year, short _Year)
	{

		clsDate Date;
		short Remaining_Days = DateOrderIn_Year;
		short _Month_Days = 0;

		Date._Year = _Year;
		Date._Month = 1;

		while (true)
		{
			_Month_Days = NumberOf_DaysInA_Month(Date._Month, _Year);

			if (Remaining_Days > _Month_Days)
			{
				Remaining_Days -= _Month_Days;
				Date._Month++;
			}
			else
			{
				Date._Day = Remaining_Days;
				break;
			}

		}

		return Date;
	}

	void Add_Days(short _Days)
	{


		short Remaining_Days = _Days + _DaysFromTheBeginingOfThe_Year(_Day, _Month, _Year);
		short _Month_Days = 0;

		_Month = 1;

		while (true)
		{
			_Month_Days = NumberOf_DaysInA_Month(_Month, _Year);

			if (Remaining_Days > _Month_Days)
			{
				Remaining_Days -= _Month_Days;
				_Month++;

				if (_Month > 12)
				{
					_Month = 1;
					_Year++;

				}
			}
			else
			{
				_Day = Remaining_Days;
				break;
			}

		}


	}

	static bool IsDate1BeforeDate2(clsDate Date1, clsDate Date2)
	{
		return  (Date1._Year < Date2._Year) ? true : ((Date1._Year == Date2._Year) ? (Date1._Month < Date2._Month ? true : (Date1._Month == Date2._Month ? Date1._Day < Date2._Day : false)) : false);
	}

	bool IsDateBeforeDate2(clsDate Date2)
	{

		return  IsDate1BeforeDate2(*this, Date2);

	}

	static bool IsDate1EqualDate2(clsDate Date1, clsDate Date2)
	{
		return  (Date1._Year == Date2._Year) ? ((Date1._Month == Date2._Month) ? ((Date1._Day == Date2._Day) ? true : false) : false) : false;
	}

	bool IsDateEqualDate2(clsDate Date2)
	{
		return  IsDate1EqualDate2(*this, Date2);
	}

	static bool IsLast_DayIn_Month(clsDate Date)
	{

		return (Date._Day == NumberOf_DaysInA_Month(Date._Month, Date._Year));

	}

	bool IsLast_DayIn_Month()
	{

		return IsLast_DayIn_Month(*this);

	}

	static bool IsLast_MonthIn_Year(short _Month)
	{
		return (_Month == 12);
	}

	static clsDate AddOne_Day(clsDate Date)
	{
		if (IsLast_DayIn_Month(Date))
		{
			if (IsLast_MonthIn_Year(Date._Month))
			{
				Date._Month = 1;
				Date._Day = 1;
				Date._Year++;
			}
			else
			{
				Date._Day = 1;
				Date._Month++;
			}
		}
		else
		{
			Date._Day++;
		}

		return Date;
	}

	void AddOne_Day()

	{
		*this = AddOne_Day(*this);
	}

	static void  SwapDates(clsDate & Date1, clsDate & Date2)
	{

		clsDate TempDate;
		TempDate = Date1;
		Date1 = Date2;
		Date2 = TempDate;

	}

	static int GetDifferenceIn_Days(clsDate Date1, clsDate Date2, bool IncludeEnd_Day = false)
	{

		int _Days = 0;
		short SawpFlagValue = 1;

		if (!IsDate1BeforeDate2(Date1, Date2))
		{

			SwapDates(Date1, Date2);
			SawpFlagValue = -1;

		}

		while (IsDate1BeforeDate2(Date1, Date2))
		{
			_Days++;
			Date1 = AddOne_Day(Date1);
		}

		return IncludeEnd_Day ? ++_Days * SawpFlagValue : _Days * SawpFlagValue;
	}

	int GetDifferenceIn_Days(clsDate Date2, bool IncludeEnd_Day = false)
	{
		return GetDifferenceIn_Days(*this, Date2, IncludeEnd_Day);
	}

	static short CalculateMyAgeIn_Days(clsDate DateOfBirth)
	{
		return GetDifferenceIn_Days(DateOfBirth, clsDate::GetSystemDate(), true);
	}


	static clsDate IncreaseDateByOneWeek(clsDate & Date)
	{

		for (int i = 1; i <= 7; i++)
		{
			Date = AddOne_Day(Date);
		}

		return Date;
	}

	void IncreaseDateByOneWeek()
	{
		IncreaseDateByOneWeek(*this);
	}

	clsDate IncreaseDateByXWeeks(short Weeks, clsDate& Date)
	{

		for (short i = 1; i <= Weeks; i++)
		{
			Date = IncreaseDateByOneWeek(Date);
		}
		return Date;
	}

	void IncreaseDateByXWeeks(short Weeks)
	{
		IncreaseDateByXWeeks(Weeks, *this);
	}

	clsDate IncreaseDateByOne_Month(clsDate& Date)
	{

		if (Date._Month == 12)
		{
			Date._Month = 1;
			Date._Year++;
		}
		else
		{
			Date._Month++;
		}
		short NumberOf_DaysInCurrent_Month = NumberOf_DaysInA_Month(Date._Month, Date._Year);
		if (Date._Day > NumberOf_DaysInCurrent_Month)
		{
			Date._Day = NumberOf_DaysInCurrent_Month;
		}

		return Date;
	}

	void IncreaseDateByOne_Month()
	{

		IncreaseDateByOne_Month(*this);

	}

	clsDate IncreaseDateByX_Days(short _Days, clsDate& Date)
	{

		for (short i = 1; i <= _Days; i++)
		{
			Date = AddOne_Day(Date);
		}
		return Date;
	}

	void IncreaseDateByX_Days(short _Days)
	{

		IncreaseDateByX_Days(_Days, *this);
	}

	clsDate IncreaseDateByX_Months(short _Months, clsDate& Date)
	{

		for (short i = 1; i <= _Months; i++)
		{
			Date = IncreaseDateByOne_Month(Date);
		}
		return Date;
	}

	void IncreaseDateByX_Months(short _Months)
	{
		IncreaseDateByX_Months(_Months, *this);
	}

	static clsDate IncreaseDateByOne_Year(clsDate& Date)
	{
		Date._Year++;
		return Date;
	}

	void IncreaseDateByOne_Year()
	{
		IncreaseDateByOne_Year(*this);
	}

	clsDate IncreaseDateByX_Years(short _Years, clsDate& Date)
	{
		Date._Year += _Years;
		return Date;
		
	}

	void IncreaseDateByX_Years(short _Years)
	{
		IncreaseDateByX_Years(_Years, *this);
	}

	clsDate IncreaseDateByOneDecade(clsDate& Date)
	{

		Date._Year += 10;
		return Date;
	}

	void IncreaseDateByOneDecade()
	{
		IncreaseDateByOneDecade(*this);
	}

	clsDate IncreaseDateByXDecades(short Decade, clsDate& Date)
	{
		Date._Year += Decade * 10;
		return Date;
	}

	void IncreaseDateByXDecades(short Decade)
	{
		IncreaseDateByXDecades(Decade, *this);
	}

	clsDate IncreaseDateByOneCentury(clsDate& Date)
	{
		Date._Year += 100;
		return Date;
	}

	void IncreaseDateByOneCentury()
	{
		IncreaseDateByOneCentury(*this);
	}

	clsDate IncreaseDateByOneMillennium(clsDate& Date)
	{

		Date._Year += 1000;
		return Date;
	}

	void IncreaseDateByOneMillennium()
	{
		IncreaseDateByOneMillennium(*this);
	}

	static clsDate DecreaseDateByOne_Day(clsDate Date)
	{
		if (Date._Day == 1)
		{
			if (Date._Month == 1)
			{
				Date._Month = 12;
				Date._Day = 31;
				Date._Year--;
			}
			else
			{

				Date._Month--;
				Date._Day = NumberOf_DaysInA_Month(Date._Month, Date._Year);
			}
		}
		else
		{
			Date._Day--;
		}

		return Date;
	}

	void DecreaseDateByOne_Day()
	{
		DecreaseDateByOne_Day(*this);
	}

	static clsDate DecreaseDateByOneWeek(clsDate &Date)
	{

		for (int i = 1; i <= 7; i++)
		{
			Date = DecreaseDateByOne_Day(Date);
		}

		return Date;
	}

	void DecreaseDateByOneWeek()
	{
		DecreaseDateByOneWeek(*this);
	}

	static clsDate DecreaseDateByXWeeks(short Weeks, clsDate &Date)
	{

		for (short i = 1; i <= Weeks; i++)
		{
			Date = DecreaseDateByOneWeek(Date);
		}
		return Date;
	}

	void DecreaseDateByXWeeks(short Weeks)
	{
		DecreaseDateByXWeeks(Weeks ,*this);
	}

	static clsDate DecreaseDateByOne_Month(clsDate &Date)
	{

		if (Date._Month == 1)
		{
			Date._Month = 12;
			Date._Year--;
		}
		else
			Date._Month--;

		short NumberOf_DaysInCurrent_Month = NumberOf_DaysInA_Month(Date._Month, Date._Year);
		if (Date._Day > NumberOf_DaysInCurrent_Month)
		{
			Date._Day = NumberOf_DaysInCurrent_Month;
		}


		return Date;
	}

	void DecreaseDateByOne_Month()
	{
		DecreaseDateByOne_Month(*this);
	}

	static clsDate DecreaseDateByX_Days(short _Days, clsDate &Date)
	{

		for (short i = 1; i <= _Days; i++)
		{
			Date = DecreaseDateByOne_Day(Date);
		}
		return Date;
	}

	void DecreaseDateByX_Days(short _Days)
	{
		DecreaseDateByX_Days(_Days, *this);
	}

	static clsDate DecreaseDateByX_Months(short _Months, clsDate &Date)
	{

		for (short i = 1; i <= _Months; i++)
		{
			Date = DecreaseDateByOne_Month(Date);
		}
		return Date;
	}

	void DecreaseDateByX_Months(short _Months)
	{
		DecreaseDateByX_Months( _Months, *this);
	}

	static clsDate DecreaseDateByOne_Year(clsDate &Date)
	{

		Date._Year--;
		return Date;
	}

	void DecreaseDateByOne_Year()
	{
		DecreaseDateByOne_Year(*this);
	}

	static clsDate DecreaseDateByX_Years(short _Years, clsDate &Date)
	{

		Date._Year -= _Years;
		return Date;
	}

	void DecreaseDateByX_Years(short _Years)
	{
		DecreaseDateByX_Years(_Years ,*this);
	}

	static clsDate DecreaseDateByOneDecade(clsDate &Date)
	{

		Date._Year -= 10;
		return Date;
	}

	void DecreaseDateByOneDecade()
	{
		DecreaseDateByOneDecade(*this);
	}

	static clsDate DecreaseDateByXDecades(short Decades, clsDate &Date)
	{

		Date._Year -= Decades * 10;
		return Date;
	}

	void DecreaseDateByXDecades(short Decades)
	{
		DecreaseDateByXDecades(Decades, *this);
	}

	static clsDate DecreaseDateByOneCentury(clsDate &Date)
	{
		
		Date._Year -= 100;
		return Date;
	}

	void DecreaseDateByOneCentury()
	{
		DecreaseDateByOneCentury(*this);
	}

	static clsDate DecreaseDateByOneMillennium(clsDate &Date)
	{
		Date._Year -= 1000;
		return Date;
	}

	void DecreaseDateByOneMillennium()
	{
		DecreaseDateByOneMillennium(*this);
	}


	static short IsEndOfWeek(clsDate Date)
	{
		return  _DayOfWeekOrder(Date._Day, Date._Month, Date._Year) == 6;
	}

	short IsEndOfWeek()
	{
		return IsEndOfWeek(*this);
	}

	static bool IsWeekEnd(clsDate Date)
	{

		short _DayIndex = _DayOfWeekOrder(Date._Day, Date._Month, Date._Year);
		return  (_DayIndex == 5 || _DayIndex == 6);
	}

	bool IsWeekEnd()
	{
		return  IsWeekEnd(*this);
	}

	static bool IsBusiness_Day(clsDate Date)
	{
		return !IsWeekEnd(Date);
	}

	bool IsBusiness_Day()
	{
		return  IsBusiness_Day(*this);
	}

	static short _DaysUntilTheEndOfWeek(clsDate Date)
	{
		return 6 - _DayOfWeekOrder(Date._Day, Date._Month, Date._Year);
	}

	short _DaysUntilTheEndOfWeek()
	{
		return  _DaysUntilTheEndOfWeek(*this);
	}

	static short _DaysUntilTheEndOf_Month(clsDate Date1)
	{

		clsDate EndOfMontDate;
		EndOfMontDate._Day = NumberOf_DaysInA_Month(Date1._Month, Date1._Year);
		EndOfMontDate._Month = Date1._Month;
		EndOfMontDate._Year = Date1._Year;

		return GetDifferenceIn_Days(Date1, EndOfMontDate, true);

	}

	short _DaysUntilTheEndOf_Month()
	{
		return _DaysUntilTheEndOf_Month(*this);
	}

	static short _DaysUntilTheEndOf_Year(clsDate Date1)
	{

		clsDate EndOf_YearDate;
		EndOf_YearDate._Day = 31;
		EndOf_YearDate._Month = 12;
		EndOf_YearDate._Year = Date1._Year;

		return GetDifferenceIn_Days(Date1, EndOf_YearDate, true);

	}

	short _DaysUntilTheEndOf_Year()
	{
		return  _DaysUntilTheEndOf_Year(*this);
	}


	static short CalculateBusiness_Days(clsDate DateFrom, clsDate DateTo)
	{

		short _Days = 0;
		while (IsDate1BeforeDate2(DateFrom, DateTo))
		{
			if (IsBusiness_Day(DateFrom))
				_Days++;

			DateFrom = AddOne_Day(DateFrom);
		}

		return _Days;

	}

	static short CalculateVacation_Days(clsDate DateFrom, clsDate DateTo)
	{
		return CalculateBusiness_Days(DateFrom, DateTo);
	}
	

	static clsDate CalculateVacationReturnDate(clsDate DateFrom, short Vacation_Days)
	{

		short WeekEndCounter = 0;

		for (short i = 1; i <= Vacation_Days; i++)
		{

			if (IsWeekEnd(DateFrom))
				WeekEndCounter++;

			DateFrom = AddOne_Day(DateFrom);
		}

		for (short i = 1; i <= WeekEndCounter; i++)
			DateFrom = AddOne_Day(DateFrom);

		return DateFrom;
	}

	static bool IsDate1AfterDate2(clsDate Date1, clsDate Date2)
	{
		return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));

	}

	bool IsDateAfterDate2( clsDate Date2)
	{
		return IsDate1AfterDate2(*this, Date2);
	}

	enum enDateCompare { Before = -1, Equal = 0, After = 1 };

	static enDateCompare CompareDates(clsDate Date1, clsDate Date2)
	{
		if (IsDate1BeforeDate2(Date1, Date2))
			return enDateCompare::Before;

		if (IsDate1EqualDate2(Date1, Date2))
			return enDateCompare::Equal;

		return enDateCompare::After;

	}

	enDateCompare CompareDates( clsDate Date2)
	{
		return CompareDates(*this, Date2);
	}
};

