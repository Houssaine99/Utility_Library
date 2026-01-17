#include <iostream>
#include "clsDate.h"
#include "clsUtil.h"


int main()
{
	
	int Arr[100];

	clsUtil::FillArrayWithRandomNumbers(Arr, 5);

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Element [" << i << "] => " << Arr[i] << std::endl;
	}

	system("pause>0");
	return 0;
}

