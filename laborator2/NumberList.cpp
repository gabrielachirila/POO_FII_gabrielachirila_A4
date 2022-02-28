#include "NumberList.h"
#include <stdio.h>
#include <stdlib.h>
//aici vom implementa metodele din clasa
//ca sa implementam o metoda din clasa 
//<tipuldereturn> <nume_clasa>::<nume_metoda> (<parametri deca sunt>) {<implementarea>}
//ca sa accesam atribute ale clasei folosim this->

//constructorul si destructorul nu au valori de return

void NumberList::Init() 
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	if (this->count >= 10)
		return false;
	else
	{
		this->numbers[count] = x;
		this->count = count + 1;
	}
	
}

void NumberList::Sort() 
{
	int ok = 1;
	while (ok)
	{
		ok = 0;
		for ( int i=0; i < this-> count-2; i++)
			if (this->numbers[i] > this->numbers[i + 1])
			{
				int aux = this->numbers[i];
				this->numbers[i] = this->numbers[i + 1];
				this->numbers[i + 1] = aux;
				ok = 1;
			}
	}
	
}

void NumberList::Print()
{
	for (int i = 0; i < this->count - 1; i++)
		printf_s("%d ", this->numbers[i]);
	printf_s("\n");
}

