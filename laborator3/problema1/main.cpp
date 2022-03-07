#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Math.h"
#include "Math.cpp"

using namespace std;

int main()
{
	printf ("adunarea a doua numere de tip int: (ex: 3+6=) %d \n", Add(3, 6));
	printf ("adunarea a trei numere de tip int: (ex: 2+2+3=) %d \n", Add(2, 2, 3));
	printf ("adunarea a doua numere de tip double: (ex: 4.1+2.4=) %d \n", Add(4.2, 2.4));
	printf ("adunarea a trei numere de tip double: (ex: 2.2+3.6+1.2=) %d \n", Add(2.2, 3.6, 1.2));
	printf ("inmultirea a doua numere de tip int: (ex: 2*4=) %d \n", Mul(2, 4));
	printf ("inmultirea a trei numere de tip int: (ex: 3*4*2=) %d \n", Mul(3, 4, 2));
	printf ("inmultirea a doua numere de tip double: (ex: 1.2*2.2=) %d \n", Mul(1.2, 2.2));
	printf ("inmultirea a trei numere de tip double: (ex: 1.3*1.4*2.3=) %d \n", Mul(1.3, 1.4, 2.3));
	printf ("adunarea unei liste de numere de tip int: (ex: 7 numere, 1+2+3+4+5+6+7=)%d \n", Add(7, 1, 2, 3, 4, 5, 6, 7));
	printf ("concatenarea a doua siruri: (ex: sir1+sir2=) %s \n", Add("sir1", "sir2"));
	

	system("pause");
	return 0;

}
