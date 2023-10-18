#include <iostream>

using namespace std;

void sort(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[10] = {5, 10, 20, 4, 1, 3, 7, 6, 30, 23};
    int arr2[10] = {545, 1123, 20, 22, 89, 3908, 342324, 0, 0, 1};

    cout << "Before sorting arr: " << endl;
    printArray(arr, 10);
    cout << endl;
    sort(arr, 10);
    cout << "After sorting arr: " << endl;
    printArray(arr, 10);
    cout << "\n\n";

    cout << "Before sorting arr2: " << endl;
    printArray(arr2, 10);
    cout << endl;
    sort(arr2, 10);
    cout << "After sorting arr2: " << endl;
    printArray(arr2, 10);
}

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
