#pragma once
#include <iostream>
#include <string>
#include "clsDate.h"

using namespace std;

class clsUtils {
public:
    enum enCharType {
        SamallLetter = 1, CapitalLetter = 2,
        Digit = 3, MixChars = 4, SpecialCharacter = 5
    };

    static void Srand() {
        srand((unsigned)time(NULL));
    }

    static int RandomNumber(int From, int To) {
        return rand() % (To - From + 1) + From;
    }

    static char GetRandomCharacter(enCharType CharType) {
        if (CharType == MixChars) {
            CharType = (enCharType)RandomNumber(1, 3);
        }

        switch (CharType) {
        case SamallLetter: return char(RandomNumber(97, 122));
        case CapitalLetter: return char(RandomNumber(65, 90));
        case SpecialCharacter: return char(RandomNumber(33, 47));
        case Digit: return char(RandomNumber(48, 57));
        default: return char(RandomNumber(65, 90));
        }
    }

    static string GenerateWord(enCharType CharType, short Length) {
        string Word;
        for (int i = 1; i <= Length; i++) {
            Word += GetRandomCharacter(CharType);
        }
        return Word;
    }

    static string GenerateKey(enCharType CharType = CapitalLetter) {
        return GenerateWord(CharType, 4) + "-" +
               GenerateWord(CharType, 4) + "-" +
               GenerateWord(CharType, 4) + "-" +
               GenerateWord(CharType, 4);
    }

    static void GenerateKeys(short NumberOfKeys, enCharType CharType) {
        for (int i = 1; i <= NumberOfKeys; i++) {
            cout << "Key [" << i << "] : " << GenerateKey(CharType) << endl;
        }
    }

    static void FillArrayWithRandomNumbers(int arr[], int arrLength, int From, int To) {
        for (int i = 0; i < arrLength; i++) {
            arr[i] = RandomNumber(From, To);
        }
    }

    static void FillArrayWithRandomWords(string arr[], int arrLength, enCharType CharType, short Wordlength) {
        for (int i = 0; i < arrLength; i++) {
            arr[i] = GenerateWord(CharType, Wordlength);
        }
    }

    static void FillArrayWithRandomKeys(string arr[], int arrLength, enCharType CharType) {
        for (int i = 0; i < arrLength; i++) {
            arr[i] = GenerateKey(CharType);
        }
    }

    static void Swap(int& A, int& B) {
        int Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(double& A, double& B) {
        double Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(bool& A, bool& B) {
        bool Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(char& A, char& B) {
        char Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(string& A, string& B) {
        string Temp = A;
        A = B;
        B = Temp;
    }

    static void Swap(clsDate& A, clsDate& B) {
        clsDate::SwapDates(A, B);
    }

    static void ShuffleArray(int arr[], int arrLength) {
        for (int i = 0; i < arrLength; i++)
            Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);

    }

    static string Tabs(short NumberOfTabs) {
        string t;
        for (int i = 1; i < NumberOfTabs; i++) {
            t += "\t";
            cout << t;
        }
        return t;
    }

    static string EncryptText(string Text, short EncryptionKey) {
        for (int i = 0; i < Text.length(); i++) {
            Text[i] = char((int)Text[i] + EncryptionKey);
        }
        return Text;
    }

    static string DecryptText(string Text, short EncryptionKey) {
        for (int i = 0; i < Text.length(); i++) {
            Text[i] = char((int)Text[i] - EncryptionKey);
        }
        return Text;
    }
};
