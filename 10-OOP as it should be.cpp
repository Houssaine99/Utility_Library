#include <iostream>
#include "clsDate.h"
#include "clsUtil.h"


int main()
{
	
    clsUtil::Srand();
    std::cout << clsUtil::RandomNumber(1, 10) << std::endl;
    std::cout << clsUtil::GetRandomCharacter(clsUtil::CapitalLetter) << std::endl;
    std::cout << clsUtil::GenerateWord(clsUtil::MixChars, 8) << std::endl;
    std::cout << clsUtil::GenerateKey(clsUtil::MixChars) << std::endl;
    clsUtil::GenerateKeys(10, clsUtil::MixChars);

    std::cout << "\n";

    //Swap Int
    int x = 10, y = 20;
    std::cout << x << " " << y << std::endl;
    clsUtil::Swap(x, y);
    std::cout << x << " " << y << std::endl << std::endl;

    //Swap double
    double a = 10.5, b = 20.5;
    std::cout << a << " " << b << std::endl;
    clsUtil::Swap(a, b);
    std::cout << a << " " << b << std::endl << std::endl;

    //Swap String
    std::string s1 = "Ali", s2 = "Ahmed";
    std::cout << s1 << " " << s2 << std::endl;
    clsUtil::Swap(s1, s2);
    std::cout << s1 << " " << s2 << std::endl << std::endl;

    //Swap Dates
    clsDate d1(1, 10, 2022), d2(1, 1, 2022);
    std::cout << d1.DateToString() << " " << d2.DateToString() << std::endl;
    clsUtil::Swap(d1, d2);
    std::cout << d1.DateToString() << " " << d2.DateToString() << std::endl;

    //Shuffl Array

    //int array
    int Arr1[5] = { 1,2,3,4,5 };
    clsUtil::ShuffleArray(Arr1, 5);
    std::cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << Arr1[i] << std::endl;
    }

    //string array
    std::string Arr2[5] = { "Ali","Fadi","Ahmed","Qasem","Khalid" };
    clsUtil::ShuffleArray(Arr2, 5);
    std::cout << "\nArray after shuffle:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << Arr2[i] << std::endl;
    }

    int Arr3[5];
    clsUtil::FillArrayWithRandomNumbers(Arr3, 5, 20, 50);
    std::cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << Arr3[i] << std::endl;
    }


    std::string Arr4[5];
    clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChars, 8);
    std::cout << "\nArray after fill:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << Arr4[i] << std::endl;
    }


    std::string Arr5[5];
    clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChars);
    std::cout << "\nArray after filling keys:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << Arr5[i] << std::endl;
    }

    std::cout << "\nText1 " << clsUtil::Tabs(5) << "Text2\n";

    const short EncryptionKey = 2; //this is the key.

    std::string TextAfterEncryption, TextAfterDecryption;
    std::string Text = "Mohammed Abu-Hadhoud";
    TextAfterEncryption = clsUtil::EncryptText(Text, EncryptionKey);
    TextAfterDecryption = clsUtil::DecryptText(TextAfterEncryption, EncryptionKey);

    std::cout << "\nText Before Encryption : ";
    std::cout << Text << std::endl;
    std::cout << "Text After Encryption  : ";
    std::cout << TextAfterEncryption << std::endl;
    std::cout << "Text After Decryption  : ";
    std::cout << TextAfterDecryption << std::endl;

    system("pause>0");

    return 0;


	system("pause>0");
	return 0;
}

