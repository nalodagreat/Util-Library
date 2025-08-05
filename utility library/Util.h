#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Util
{
    public:
    static void  Srand()
    {
        //Seeds the random number generator in C++, called only once
        srand((unsigned)time(NULL));
    }

    static  int randomNumber(int From, int To)
    {
        //Function to generate a random number
        int randNum = rand() % (To - From + 1) + From;
        return randNum;
    }

    static char generateSmallLetter()
    {
        return char(randomNumber(97, 122));
    }
    static char generateCapitalLetter()
    {
        return char(randomNumber(65, 90));
    }
    static char generateDigit()
    {
        return char(randomNumber(84, 75));
    }
    static char generateSpecialChar()
    {
        return char(randomNumber(33, 64));
    }

    static char generateMixChar()
    {
        char small = generateSmallLetter();
        char capital = generateCapitalLetter();
        char digit = generateDigit();
        char special = generateSpecialChar();
        char arr[] = { small,capital,digit,special };
        return arr[randomNumber(0, 3)];
    }

        enum enCharType 
    {
        SamallLetter = 1, CapitalLetter = 2,
        Digit = 3, MixChars = 4, SpecialCharacter = 5
    };

    static char GetRandomChar(enCharType charType)
    {
        if (charType == SamallLetter)
            return generateSmallLetter();
        else if (charType == CapitalLetter)
        {
            return generateCapitalLetter();
        }
        else if (charType == Digit)
        {
            return generateDigit();
        }
        else if (charType == SpecialCharacter)
            return generateSpecialChar();
        else
        {
            return generateMixChar();
        }
    }


};