#include "globals.h"
#include <string.h>

int CompareNume(Students* student1, Students* student2)
{
	if (strcmp(student1->GetNume(), student2->GetNume()) > 0)
		return 1;
	if (strcmp(student1->GetNume(), student2->GetNume()) < 0)
		return -1;
	if (strcmp(student1->GetNume(), student2->GetNume()) == 0)
		return 0;
}

int CompareMathGrade(Students* student1, Students* student2)
{
	if (student1->GetMathGrade() > student2->GetMathGrade() )
		return 1;
	if (student1->GetMathGrade() < student2->GetMathGrade() )
		return -1;
	if (student1->GetMathGrade() == student2->GetMathGrade())
		return 0;
}

int CompareEnglishGrade(Students* student1, Students* student2)
{
	if (student1->GetEnglishGrade() > student2->GetEnglishGrade() )
		return 1;
	if (student1->GetEnglishGrade() < student2->GetEnglishGrade() )
		return -1;
	if (student1->GetEnglishGrade() == student2->GetEnglishGrade() )
		return 0;
}

int CompareHistoryGrade(Students* student1, Students* student2)
{
	if (student1->GetHistoryGrade() > student2->GetHistoryGrade() )
		return 1;
	if (student1->GetHistoryGrade() < student2->GetHistoryGrade() )
		return -1;
	if (student1->GetHistoryGrade() == student2->GetHistoryGrade() )
		return 0;
}

int CompareAverageGrade(Students* student1, Students* student2)
{
	if (student1->GetAverageGrade() > student2->GetAverageGrade() )
		return 1;
	if (student1->GetAverageGrade() < student2->GetAverageGrade() )
		return -1;
	if (student1->GetAverageGrade() == student2->GetAverageGrade() )
		return 0;
}

