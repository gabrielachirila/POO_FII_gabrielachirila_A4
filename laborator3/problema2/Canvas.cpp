#include "Canvas.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Canvas::Canvas(int width, int height) {
	this->NumberOfColumns = width;
	this->NumberOfLines = height;

	//malloc (number_of_elements * sizeof(tip_element))
	this->matrice = (char**)(malloc(this->NumberOfLines * sizeof(char*)));
	for (int i = 0; i < NumberOfLines; i++)
		this->matrice[i] = (char*)(malloc(this->NumberOfColumns * sizeof(char)));

}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {

	for (int i = 0; i < this->NumberOfColumns; i++)
		for (int j = 0; j < this->NumberOfLines; j++)
			if ( ( (i-x)*(i-x) + (j-y)*(j-y) >= ray*(ray-1)) && ( (i - x)*(i - x) + (j - y)*(j - y) <= ray*(ray + 1)))
				this->matrice[i][j] = ch;
			else
				this->matrice[i][j] = 32;
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
	for (int i = 0; i < this->NumberOfColumns; i++)
		for (int j = 0; j < this->NumberOfLines; j++)
			if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray)
				this->matrice[i][j] = ch;
			else
				this->matrice[i][j] = 32;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
	for (int i = 0; i < this->NumberOfColumns; i++)
		for (int j = 0; j < this->NumberOfLines; j++)
			if ( (j>=left && i==top && j<=right) || (i>=top && j==left && i<=bottom) || (j>=left && i==bottom && j<=right) || (i>=top && j==right && i<=bottom) )
				this->matrice[i][j] = ch;
			else
				this->matrice[i][j] = 32;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
	for (int i = 0; i < this->NumberOfColumns; i++)
		for (int j = 0; j < this->NumberOfLines; j++)
			if (j >= left && i>=top && j <= right && i<=bottom)
				this->matrice[i][j] = ch;
			else
				this->matrice[i][j] = 32;
}

void Canvas::SetPoint(int x, int y, char ch) {
	this->matrice[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch){
	int dx = x2 - x1;
	int dy = y2 - y1;
	int D = 2 * dy - dx;
	int y = y1;
	for (int i = x1; i <= x2; i++)
	{
		matrice[i][y] = ch;
		if(D>0)
		{
			y = y + 1;
			D = D - 2 * dx;
		}
		D = D + 2 * dy;
	}
}
void Canvas::Print() // shows what was printed
{
	for (int i = 0; i < this->NumberOfColumns; i++)
	{
		for (int j = 0; j < this->NumberOfLines; j++)
			printf("%c",this->matrice[i][j]);
		printf("\n");
	}
	printf("--------------------------------------------------------------\n");
}

void Canvas::Clear() // clears the canvas
{
	for (int i = 0; i < this->NumberOfColumns; i++)
		for (int j = 0; j < this->NumberOfLines; j++)
			matrice[i][j] = 32;
}
