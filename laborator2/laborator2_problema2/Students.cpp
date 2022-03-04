#include "Students.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool Students::CheckValid(float val)
{
	return ((val >= 1) && (val <= 10));
}

void Students::SetNume(char* nume)
{
	//printf("am apelat methoda SetNume\n");
	strcpy_s(this->Nume,30,nume);
}

char* Students::GetNume()
{
	//printf("am apelat methoda GetNume\n");
	return this->Nume;
}

void Students::SetMathGrade(float Grade)
{
	//printf("am apelat methoda SetMathGrade\n");
	if(CheckValid(Grade))
	this->MathGrade = Grade;
}

float Students::GetMathGrade()
{
	//printf("am apelat methoda GetMathGrade\n");
	return this->MathGrade;
}

void Students::SetHistoryGrade(float Grade)
{
	//printf("am apelat methoda SetHistoryGrade\n");
	if (CheckValid(Grade))
	this->HistoryGrade = Grade;
}

float Students::GetHistoryGrade()
{
	//printf("am apelat methoda GetHistoryGrade\n");
	return this->HistoryGrade;
}

void Students::SetEnglishGrade(float Grade)
{
	//printf("am apelat methoda SetEnglishGrade\n");
	if (CheckValid(Grade))
	this->EnglishGrade = Grade;
}

float Students::GetEnglishGrade()
{
	//printf("am apelat methoda GetEnglishGrade\n");
	return this->EnglishGrade;
}

void Students::SetAverageGrade(float Grade1, float Grade2, float Grade3)
{
	//printf("am apelat methoda SetAverageGrade\n");
	if ( CheckValid(Grade1) && (CheckValid(Grade2)) && (CheckValid(Grade3)) )
	this->AverageGrade = (Grade1 + Grade2 + Grade3) / 3.;
}

float Students::GetAverageGrade()
{
	//printf("am apelat methoda GetAverageGrade\n");
	return this->AverageGrade;
}

Students::Students()
{
	//printf("am apelat constructorul implicit\n");
	memset(this->Nume, 0, 30);
	this->MathGrade = 0;
	this->EnglishGrade = 0;
	this->HistoryGrade = 0;
	this->AverageGrade = 0;
}

Students::Students(char* nume, float nota1, float nota2, float nota3, float media)
{
	//printf("am apelat constructorul cu parametrul nume si nota\n");
	strcpy_s(this->Nume, 30, nume);
	this->MathGrade= nota1;
	this->EnglishGrade = nota2;
	this->HistoryGrade = nota3;
	this->AverageGrade = media;
}


Students::~Students()
{
	//printf("am apelat destructorul\n");
	memset(this->Nume, 0, 30);
	this->MathGrade = 0;
	this->EnglishGrade = 0;
	this->HistoryGrade = 0;
	this->AverageGrade = 0;
}
