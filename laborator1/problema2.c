#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	FILE* fp;
	int SumaNumerelor = 0;

	if (fopen_s(&fp, "in.txt", "r") != 0) //daca fisierul nu se poate deschide fopen != 0
		printf("Eroare.Fisierul nu a putut fi deschis./n");
	else //daca fisierul a putut fi deschis
		{
			char numar[20]; 
			while (fgets(numar, 20, fp)) //citim numerele de pe fiecare linie ca siruri de caractere
			{
				int x,nr=0;
				//numar[strlen(numar) - 1] = '\0';
				for (int i = 0; i < strlen(numar) && strchr("0123456789",numar[i]); i++)
				{
					x = numar[i] - '0';// x de tip int
					nr = nr * 10 + x;// formam numarul
				}
				SumaNumerelor= SumaNumerelor + nr;// adaugam numarul in suma
			}
		}

	printf("Suma numerelor citite din fisier este: %d\n", SumaNumerelor);
	return 0;

}
