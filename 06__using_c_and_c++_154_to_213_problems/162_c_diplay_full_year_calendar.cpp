#include <iostream>

#include <string>
#include <iomanip>

using namespace std;


struct Date {
    short day;
    short month;
    short year;
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

    static short setMonth() {
        short month;
        cout << "\nPlease enter the month (1-12): ";
        cin >> month;
        return month;
    }

    static short setYear() {
        short year;
        cout << "Please enter the year: ";
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

    static void displayCalendarOfMonth(const Date& enteredDate) {
        short dayGregorianOrder = calculateDayOrderInGregorianCalendar(enteredDate);
        short monthDaysNumber = getNumberOfDaysInMonth(enteredDate.year, enteredDate.month);

        cout << "\n\n  _______________[ " << monthShortName(enteredDate.month) << " ]_______________\n\n";
        cout << "   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

        for (short i = 0; i < dayGregorianOrder; ++i)
            cout << "     ";

        for (short day = 1; day <= monthDaysNumber; ++day) {
            cout << setw(5) << day;
            if ((dayGregorianOrder + day) % 7 == 0) {
                cout << "\n\n";
            }
        }
        cout << "\n  ___________________________________\n";
    }

    static void readYearAndDisplayCalendarOfMonths() {
        Date enteredDate;

        enteredDate.year = setYear();

        cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-__-_-_-\n";
        cout << "\t\tCalendar -- " << enteredDate.year << "\n";
        cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-__-_-_-\n\n";

        enteredDate.day = 1;
        for (enteredDate.month = 1; enteredDate.month <= 12; ++enteredDate.month) {
            displayCalendarOfMonth(enteredDate);
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        }
    }
};

int main() {
    Calendar::readYearAndDisplayCalendarOfMonths();
    return 0;
}