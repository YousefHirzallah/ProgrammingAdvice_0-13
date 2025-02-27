#pragma once
#include <iostream>
#include <string>
#include<limits>
#include "clsDate.h"
#include "clsUtils.h"

using namespace std;

class clsInputValidate {
public:
    static bool IsNumberBetween(short Number, short From, short To) {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(int Number, int From, int To) {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(float Number, float From, float To) {
        return (Number >= From && Number <= To);
    }

    static bool IsNumberBetween(double Number, double From, double To) {
        return (Number >= From && Number <= To);
    }

    static bool IsDateBetween(clsDate Date, clsDate From, clsDate To) {
        if (clsDate::IsDate1BeforeDate2(To, From))
          clsUtils::Swap(To,From);

        if ((clsDate::IsDate1AfterDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From)) &&
            (clsDate::IsDate1BeforeDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))) {
            return true;
        }
        return false;
    }

    static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter again\n") {
        int Number;
        while (!(cin >> Number)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << ErrorMessage;
        }
        return Number;
    }
    static double ReadDoubleNumber(string ErrorMessage = "Invalid Number, Enter again\n") {
        double Number;
        while (!(cin >> Number)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << ErrorMessage;
        }
        return Number;
    }
    static int ReadIntNumberBetween(int From, int To, string ErrorMessage = "Number is not within range, Enter again:\n") {
        int Number;
        do{
            cout << ErrorMessage;
            Number = ReadIntNumber();
        }while(!IsNumberBetween(Number, From, To));
        return Number;
    }

    static double ReadDoubleNumberBetween(double From, double To, string ErrorMessage = "Number is not within range, Enter again:\n") {
        double Number;
        do{
            cout << ErrorMessage;
            Number = ReadIntNumber();
        }while(!IsNumberBetween(Number, From, To));
        return Number;
    }

    static bool IsValidDate(clsDate Date) {
        return clsDate::IsValidDate(Date);
    }
};