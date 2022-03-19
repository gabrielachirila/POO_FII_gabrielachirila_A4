
class Sort
{
    // add data members
    int* vector;
    int NrElem;
    int partition(int low, int high, bool ascendent = false);

public:

    // add constuctors
    Sort(int NumarElemente, int ElementMinim, int ElementMaxim);
    Sort();
    Sort(int* Vector, int NumarElemente);
    Sort(int count, ...);
    Sort(char* c);

    void InsertSort(bool ascendent = false);
    void QuickSort(int low, int high, bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
