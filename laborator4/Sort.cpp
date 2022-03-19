#include "Sort.h"
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


Sort::Sort(int NumarElemente, int ElementMinim, int ElementMaxim) 
{
	this->vector = (int*)malloc(NumarElemente * sizeof(int));
	this->NrElem = NumarElemente;

	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < NumarElemente; i++) {
		//printf("Am generat elementul cu numarul %d: %d\n", i, min_element + rand() % (min_element - max_element + 1));
		//aici in loc de printf puneti elementele in vectorul alocat
		this->vector[i] = ElementMinim + rand() % (ElementMaxim- ElementMinim + 1);
	}
}

Sort::Sort() : vector(new int[6]{ 1, 2, 3, 4, 5, 6 }) 
{
	//tot ce mai avem de facut este sa setam numarul de elemente din vector cum trebuie
	this->NrElem = 6;
}

Sort::Sort(int* Vector, int NumarElemente) 
{
	//alocati memoria
	this->vector = (int*)malloc(NumarElemente * sizeof(int));
	this->NrElem = NumarElemente;

	for (int i = 0; i < NumarElemente; i++) {
		//aici in loc de printf puneti elementele in vectorul alocat
		//printf("Elementul din vector cu numarul %d: %d\n", i, Vector[i]);
		this->vector[i] = Vector[i];
	}
}

Sort::Sort(int count, ...)
{
	//alocati memoria
	this->vector = (int*)malloc(count * sizeof(int));
	this->NrElem = count;

	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		//aici in loc de printf puneti elementele in vectorul alocat
		//printf("Elementul din va_arg cu numarul %d: %d\n", i, va_arg(vl, int));
		this->vector[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char* c) 
{
	int count = 1;
	int lungime = strlen(c);
	
	for (int i = 0; i < lungime; i++)
		if (c[i] == ',')
			count++;

	this->vector = (int*)malloc(count * sizeof(int));
	this->NrElem = count;
	
	char* p, * next_token1 = 0;
	p = strtok_s(c, ",", &next_token1);
	count=0;

	while ( p!=NULL )
	{
		this->vector[count] = 0;
		lungime = strlen(p);
		for (int i = 0; i < lungime; i++)
			this->vector[count] = this->vector[count] * 10 + (p[i] - '0');
		p = strtok_s(NULL, ",", &next_token1);
		count++;
	}
	
}

void Sort::InsertSort(bool ascendent)
{
	int i, key, j;
	for (i = 1; i < this->NrElem; i++)
	{
		key = this->vector[i];
		j = i - 1;
		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		if(ascendent==true)
			while (j >= 0 && this->vector[j] > key)
			{
				this->vector[j + 1] = this->vector[j];
				j = j - 1;
			}
		else
			while (j >= 0 && this->vector[j] < key)
			{
				this->vector[j + 1] = this->vector[j];
				j = j - 1;
			}
		this->vector[j + 1] = key;
	}
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int Sort::partition(int low, int high, bool ascendent)
{
	int pivot = this->vector[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

	for (int j = low; j <= high - 1 ; j++)
	{
		// If current element is smaller than the pivot
		if (ascendent == true && this->vector[j] < pivot || ascendent == false && this->vector[j] > pivot)
		{
			i++; // increment index of smaller element
			int aux;
			aux = this->vector[i];
			this->vector[i] = this->vector[j];
			this->vector[j] = aux;
		}
	}

	int aux = this->vector[i+1];
	this->vector[i+1] = this->vector[high];
	this->vector[high] = aux;

	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */

void Sort::QuickSort(int low, int high, bool ascendent)
{
	high = high - 1;
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(low, high, ascendent);

		// Separately sort elements before
		// partition and after partition
		QuickSort(low, pi - 1, ascendent);
		QuickSort(pi + 1, high, ascendent);
	}
}

void Sort::BubbleSort(bool ascendent)
{
	int i, j;
	for (i = 0; i < this->NrElem; i++)
		// Last i elements are already in place
		for (j = 0; j < this->NrElem - i - 1; j++)
			if (this->vector[j] > this->vector[j + 1] && ascendent || this->vector[j] < this->vector[j + 1] && ascendent == false)
				{
				int aux = this->vector[j];
				this->vector[j] = this->vector[j + 1];
				this->vector[j + 1] = aux;
				}
}

void Sort::Print()
{
	for (int i = 0; i < this->NrElem; i++)
		printf("%d ", this->vector[i]);
	printf("\n");
}

int  Sort::GetElementsCount()
{
	return this->NrElem;
}

int  Sort::GetElementFromIndex(int index)
{
	return this->vector[index];
}
