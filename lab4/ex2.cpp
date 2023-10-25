#include <iostream>
using namespace std;

int main() {

    int *a{nullptr};
    string *b{nullptr};

    int arr[7];
    string str[5];

    a = arr;

    b = str;

    for (int i = 0; i < 7; i++) {
        *a = i * 2;
        a++;
    }

    for (int j = 0; j < 5; j++) {
        *b = to_string(j);
        b++;
    }

    for (int k : arr) {
        cout << k << endl;
    }

    for (string l: str) {
        cout << l << endl;
    }

    delete[] a;
    delete[] b;

    a = nullptr;
    b = nullptr;

    return 0;
}
