#include <iostream>

using namespace std;

const int SIZE = 10;

void printArray(int A[], int n)
{
    for(int i = 0; i < n - 1; i++)
        cout << A[i] << ", ";

    cout << A[n-1] << endl;
}

void swap(int &x, int &y)
{
    int temp = x; x = y; y = temp;
}

int partition(int A[], int p, int r)
{
    int x = A[r];
    int i = p-1;

    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i = i+1;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    printArray(A, SIZE);
    return i + 1;
}

void quickSort(int A[], int p, int r)
{
    int q = 0;

    if(p<r)
    {
        q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main(){
    int A[SIZE] = {7, 2, 10, 9, 11, 15, 13, 4, 1, 8};
    printArray(A, SIZE);
    quickSort(A, 0, SIZE - 1);
    printArray(A, SIZE);
}
