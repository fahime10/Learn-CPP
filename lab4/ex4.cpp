#include <iostream>
using namespace std;

// By reference
void swap(int& a, int& b);
void swap(int* a, int* b);

int main() {

    int a = 10;
    int b = 24;

    int *ptra = &a;
    int *ptrb = &b;

    cout << "Before swap, a = " << a << ", b = " << b << endl;

    swap(a, b);

    cout << "After swap, a = " << a << ", b = " << b << endl;

    swap(ptra, ptrb);

    cout << "Re-swap using pointers: a = " << a << ", b = " << b << endl;

    return 0;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
