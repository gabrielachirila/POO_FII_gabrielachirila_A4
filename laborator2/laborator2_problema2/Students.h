#pragma once
class Students
{
	private:
		char Nume[30];
		float MathGrade, EnglishGrade, HistoryGrade, AverageGrade;
		bool CheckValid(float val);
	public:
		Students(); // constructor (putem pune si parametri daca dorim)
		Students(char* nume, float grade1, float grade2, float grade3, float average);
		~Students(); // destructor (nu are parametri)

		void SetNume(char* nume);
		char* GetNume();

		void SetMathGrade(float Grade);
		float GetMathGrade();

		void SetEnglishGrade(float Grade);
		float GetEnglishGrade();

		void SetHistoryGrade(float Grade);
		float GetHistoryGrade();

		void SetAverageGrade(float Grade1, float Grade2, float Grade3);
		float GetAverageGrade();
};

