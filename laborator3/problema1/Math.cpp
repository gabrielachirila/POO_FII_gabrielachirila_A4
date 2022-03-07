#include "Math.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include<stdio.h>

static int Add(int nr1, int nr2) {

	return nr1 + nr2;

}

static int Add(int nr1, int nr2, int nr3) {

	return nr1 + nr2 + nr3;

}

static int Add(double nr1, double nr2) {

	return (int)(nr1 + nr2);
}

static int Add(double nr1, double nr2, double nr3) {

	return (int)(nr1 + nr2 + nr3);
}

static int Mul(int nr1, int nr2) {

	return nr1 * nr2;
}

static int Mul(int nr1, int nr2, int nr3) {

	return nr1 * nr2 * nr3;
}

static int Mul(double nr1, double nr2) { 
	return (int)(nr1 * nr2);
}

static int Mul(double nr1, double nr2, double nr3) {
	return (int)(nr1 * nr2 * nr3);

}

static int Add(int count, ...)// sums up a list of integers
{
	int suma = 0;
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		suma = suma + va_arg(vl, int);
	}
	va_end(vl);
	return suma;
}

static char* Add(const char* sir1, const char* sir2) {
	
	if (sir1 == nullptr || sir2 == nullptr)
		return nullptr;

	int sizeToRealloc;
	sizeToRealloc = strlen(sir1) + strlen(sir2) + 1;

	char* sir3;
	sir3 = (char*)malloc(sizeToRealloc);
	memset(sir3, 0, sizeToRealloc);

	memcpy(sir3, sir1, strlen(sir1));
	memcpy(sir3 + strlen(sir1), sir2, strlen(sir2));

	return sir3;

}

