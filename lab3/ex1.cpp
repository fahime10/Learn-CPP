#include <iostream>

using namespace std;

int findIndex(int arr[], int value);

int main()
{
    int arr[5] = {4, 5, 10, 4, 3};

    cout << findIndex(arr, 10) << endl;
}

int findIndex(int arr[], int value) {
    for (int i = 0; i < sizeof(arr); i ++) {
        if (arr[i] == value) {
            return i;
        }
    }

    return -1;
}
