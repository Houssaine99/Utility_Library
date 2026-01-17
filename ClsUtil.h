#pragma once

#include <iostream>
#include <cstdlib>

class clsUtil
{
public:

	enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

	static void Srand()
	{
		srand((unsigned)time(NULL));
	}

	static int RandomNumber(int From, int To)
	{
		int RandomNumber = rand() % (To - From + 1) + From;

		return RandomNumber;
	}

	static char GetRandomCharacter(enCharType CharType)
	{
		switch (CharType)
		{
		case enCharType::SmallLetter:
			return char(RandomNumber(97, 122));
		case enCharType::CapitalLetter:
			return char(RandomNumber(65, 90));
		case enCharType::SpecialCharacter:
			return char(RandomNumber(33, 47));
		case enCharType::Digit:
			return char(RandomNumber(48, 57));
		default:
			return '\0';
		}
	}

	static std::string GenerateWord(enCharType CharType, short Length)
	{
		std::string Word = "";

		for (int i = 1; i <= Length; i++)
		{
			Word = Word + GetRandomCharacter(CharType);
		}

		return Word;
	}

	static std::string GenerateKey()
	{
		std::string Key = "";

		Key = GenerateWord(enCharType::CapitalLetter, 4) + '-';
		Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + '-';
		Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + '-';
		Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

		return Key;
	}

	static void GenerateKeys(short NumberOfKeys)
	{
		std::cout << std::endl;

		for (int i = 1; i <= NumberOfKeys; i++)
		{
			std::cout << "Key [" << i << "] : " << GenerateKey() << std::endl;
		}
	}

	static void FillArrayWithRandomNumbers(int Arr[100], int ArrayLength)
	{

		for (int i = 0; i < ArrayLength; i++)
		{
			Arr[i] = RandomNumber(1, 100);
		}
	}
};

