#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main()
{
	printf("Introduceti numarul de cuvinte din propozitie: ");
	int numarCuvinte;
	scanf_s("%d", &numarCuvinte, 4);
	printf("Introduceti o propozitie: ");
	char cuvant[20], vect[20][20];
	int lungime[20];
	int counter = 0;
	while (scanf_s("%19s", &cuvant, 19))
	{
		//printf("Cuvantul citit este: %s\n", cuvant);
		strcpy_s(vect[counter], cuvant);
		lungime[counter] = strlen(cuvant);
		counter += 1;
		if (counter >= numarCuvinte)
			break;
	}
	
	for (int i=0; i<numarCuvinte-1; i++)
		for (int j = i + 1; j < numarCuvinte; j++)
		{
			if ( lungime[i] < lungime[j] || (lungime[i] == lungime[j] && vect[i][0] > vect[j][0]) )
			{
				char aux[20];
				int aux1;
				aux1 = lungime[i];
				lungime[i] = lungime[j];
				lungime[j] = aux1;
				strcpy_s(aux, vect[i]);
				strcpy_s(vect[i], vect[j]);
				strcpy_s(vect[j], aux);
			}
			
		}
	
	for (int i = 0; i < numarCuvinte; i++)
		//printf("sir: %s cu lungimea: %d\n", vect[i],lungime[i]);
		printf("%s\n", vect[i]);

	return 0;
}