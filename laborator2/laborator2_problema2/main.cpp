#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Students.h"
#include "globals.h"

using namespace std;

int main()
{

	Students s1;

	float a, b, c, d;

	s1.SetNume((char*)"Jake");
	s1.SetMathGrade(7);
	s1.SetEnglishGrade(10);
	s1.SetHistoryGrade(8);

	a = s1.GetMathGrade();
	b = s1.GetEnglishGrade();
	c = s1.GetHistoryGrade();
	s1.SetAverageGrade(a, b, c);
	d = s1.GetAverageGrade();

	printf("S1| nume: %s | math: %0.2f | english: %0.2f | history: %0.2f | average: %0.2f\n", s1.GetNume(), a, b, c, d);
	
	Students s2;

	s2.SetNume((char*)"John");
	s2.SetMathGrade(9);
	s2.SetEnglishGrade(10);
	s2.SetHistoryGrade(6);

	a = s2.GetMathGrade();
	b = s2.GetEnglishGrade();
	c = s2.GetHistoryGrade();
	s2.SetAverageGrade(a, b, c);
	d = s2.GetAverageGrade();

	printf("S2| nume: %s | math: %0.2f | english: %0.2f | history: %0.2f | average: %0.2f\n", s2.GetNume(), a, b, c, d);
	printf("---------------------------------------------------------------------------------\n\n");


	printf("Valoarea comparatiei dintre numele studentilor %s si %s este: %d\n", s1.GetNume(), s2.GetNume(), CompareNume(&s1, &s2));
	
	printf("Valoarea comparatiei dintre nota la matematica a studentilor %s si %s este: %d\n", s1.GetNume(), s2.GetNume(), CompareMathGrade(&s1, &s2));

	printf("Valoarea comparatiei dintre nota la engleza a studentilor %s si %s este: %d\n", s1.GetNume(), s2.GetNume(), CompareEnglishGrade(&s1, &s2));
	
	printf("Valoarea comparatiei dintre nota la istorie a studentilor %s si %s este: %d\n", s1.GetNume(), s2.GetNume(), CompareHistoryGrade(&s1, &s2));

	printf("Valoarea comparatiei dintre media studentilor %s si %s este: %d\n", s1.GetNume(), s2.GetNume(), CompareAverageGrade(&s1, &s2));
	
	system("pause");

	return 0;
}