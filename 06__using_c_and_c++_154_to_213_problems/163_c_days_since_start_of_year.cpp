#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Date {
    short day;
    short month;
    short year;
};

class ExtractedDateInfo {
public:
    short dayGregorianOrder;
    string dayName;
    string formattedDate;
    short nbrOfMonthDays;
    short nbrOfYearDays;
};

class Calendar {
public:
    static short calculateDayOrderInGregorianCalendar(const Date& enteredDate) {
        short a = (14 - enteredDate.month) / 12;
        short y = enteredDate.year - a;
        short m = enteredDate.month + (12 * a) - 2;
        return (enteredDate.day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
    }

    static short checkIsLeapYear(short year) {
        return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
    }

    static short getNumberOfDaysInMonth(short year, short month) {
        static short daysInMonths[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return (month == 2) ? (checkIsLeapYear(year) ? 29 : 28) : daysInMonths[month];
    }

    static string setDayNameByDayGregorianOrder(short dayGregorianOrder) {
        const string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        return days[dayGregorianOrder];
    }

    static short setDay() {
        short day;
        cout << "Please enter the day: ";
        cin >> day;
        return day;
    }

    static short setMonth() {
        short month;
        cout << "\nPlease enter the month (1-12): ";
        cin >> month;
        return month;
    }

    static short setYear() {
        short year;
        cout << "\nPlease enter the year: ";
        cin >> year;
        return year;
    }

    static string monthShortName(short monthNumber) {
        const string months[] = {
            "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
        };
        return months[monthNumber - 1];
    }

    static Date readDateData() {
        Date date;

        date.day = setDay();
        date.month = setMonth();
        date.year = setYear();
        return date;
    }

    static short getNumberOfYearDaysTillMonth(short year, short month) {
        short numberOfYearDays = 0;
        for (short everyMonth = 1; everyMonth < month; ++everyMonth) {
            numberOfYearDays += getNumberOfDaysInMonth(year, everyMonth);
        }
        return numberOfYearDays;
    }

    static ExtractedDateInfo setDateInfo(const Date& dateData) {
        ExtractedDateInfo extractedDateData;
        extractedDateData.nbrOfMonthDays = getNumberOfDaysInMonth(dateData.year, dateData.month);
        extractedDateData.nbrOfYearDays = getNumberOfYearDaysTillMonth(dateData.year, dateData.month) + dateData.day;
        return extractedDateData;
    }
};

int main() {
    Date dateData = Calendar::readDateData();
    ExtractedDateInfo extractedDateData = Calendar::setDateInfo(dateData);

    cout << "\n\nNumber of days from the beginning of the year is: \""
              << extractedDateData.nbrOfYearDays << "\"\n\n";

    return 0;
}