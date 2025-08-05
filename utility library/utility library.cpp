#include <iostream>
#include "Util.h"

int main()

{
    Util::Srand();
    cout << Util::randomNumber(1, 10) << endl;
    cout << Util::GetRandomChar(Util::CapitalLetter) << endl;
    cout << Util::generateWord(Util::MixChars, 8) << endl;
    cout << Util::generateKey(Util::MixChars) << endl;
    Util::generateKeys( Util::MixChars, 10 );

    cout << "\n";

    //swap Int
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    Util::swap(x, y);
    cout << x << " " << y << endl << endl;

    //swap double
    double a = 10.5, b = 20.5;
    cout << a << " " << b << endl;
    Util::swap(a, b);
    cout << a << " " << b << endl << endl;

    //swap String
    string s1 = "Mario", s2 = "Rosii";
    cout << s1 << " " << s2 << endl;
    Util::swap(s1, s2);
    cout << s1 << " " << s2 << endl << endl;

    
    //Shuffl Array

    //int array
    int Arr1[5] = { 1,2,3,4,5 };
    Util::shuffleArray(Arr1, 5);
    cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr1[i] << endl;
    }

    //string array
    string Arr2[5] = { "Yassine","Giorgio","Ahmed","Mario","ilaria" };
    Util::shuffleArray(Arr2, 5);
    cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr2[i] << endl;
    }

    int Arr3[5];
    Util::fillArrayWithRandomNum(Arr3,5,10,17);
    cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr3[i] << endl;
    }

    string Arr4[5];
    Util::fillArrayWithRandomWords(Arr4, 5, Util::MixChars, 8);
    cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr4[i] << endl;
    }

    string Arr5[5];
    Util::fillArrayWithRandomKeys(Arr5, 5, Util::MixChars);
    cout << "\nArray after filling keys:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr5[i] << endl;
    }

    cout << "\nText1 " << Util::Tabs(5) << "Text2\n";

    const short EncryptionKey = 2; //this is the key.

    string TextAfterEncryption, TextAfterDecryption;
    string Text = "Ossama Tijani";
    TextAfterEncryption = Util::encryptText(Text, EncryptionKey);
    TextAfterDecryption = Util::decryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : ";
    cout << Text << endl;
    cout << "Text After Encryption  : ";
    cout << TextAfterEncryption << endl;
    cout << "Text After Decryption  : ";
    cout << TextAfterDecryption << endl;

  

    return 0;
}
