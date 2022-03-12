#include <iostream>
#include "Canvas.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	Canvas c1(6, 6);
	c1.DrawCircle(2, 2, 2, '*');
	c1.Print();
	c1.Clear();
	c1.FillCircle(2, 2, 2, '*');
	c1.Print();
	c1.Clear();
	c1.DrawRect(2, 2, 5, 5, '*');
	c1.Print();
	c1.Clear();
	c1.FillRect(1, 1, 4, 4, '*');
	c1.Print();
	c1.Clear();
	c1.SetPoint(4, 4, '*');
	c1.Print();
	c1.Clear();
	c1.DrawLine(1, 1, 3, 3, '*');
	c1.Print();
	c1.Clear();

	system("pause");
	return 0;

}