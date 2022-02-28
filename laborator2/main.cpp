#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList f1;

	f1.Init();
	int y = 64;
	for (int i = 0; i < 10; i++)
	{
		f1.Add(y);
		y = y - 4;
	}

	printf("Vectorul curent este: \n");
	f1.Print();
	f1.Sort();
	printf("Vectorul sortat este: \n");
	f1.Print();


	system("pause");
	return 0;
}