#include "Sort.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	printf("Constructor 1: \n");
	Sort c1(100, 10, 80);
	c1.Print();
	printf("Constructor 2: \n");
	Sort c2;
	c2.Print();
	printf("Constructor 3: \n");
	int v[] = { 5,2,3,1,6,4 };
	Sort c3(v, 6);
	c3.Print();
	printf("Constructor 4: \n");
	Sort c4(6, 3, 2, 5, 1, 4, 6);
	c4.Print();
	printf("Constructor 5: \n");
	char s[] = "21,14,153,56";
	Sort c5(s);
	c5.Print();
	printf("Pentru constructorul 5: \n");
	printf("nr elem(GetElementsCount): %d \n", c5.GetElementsCount());
	printf("elementul de pe pozitia 2(GetElementFromIndex(2)): %d \n", c5.GetElementFromIndex(2));
	printf("sortarea(InsertSort) crescatoare: ");
	c5.InsertSort(true);
	c5.Print();
	printf("sortarea(InsertSort) descrescatoare: ");
	c5.InsertSort(false);
	c5.Print();
	printf("sortarea(QuickSort) crescatoare: ");
	c5.QuickSort(0, c5.GetElementsCount(),true);
	c5.Print();
	printf("sortarea(QuickSort) descrescatoare: ");
	c5.QuickSort(0, c5.GetElementsCount(), false);
	c5.Print();
	printf("sortarea(BubbleSort) crescatoare: ");
	c5.BubbleSort(true);
	c5.Print();
	printf("sortarea(BubbleSort) descrescatoare: ");
	c5.BubbleSort(false);
	c5.Print();

	system("pause");
	return 0;
}