#include <iostream>
using namespace std;

int main() {

    int *a = new int[7];
    string *b = new string[5];

    for (int i = 0; i < 7; i++) {
        *(a+i) = i * 2;

    }

    for (int j = 0; j < 5; j++) {
        *(b+j) = to_string(j);

    }

    for (int k = 0; k < 7; k++) {
        cout << *(a+k) << endl;
    }

    for (int l = 0; l < 5; l++) {
        cout << *(b+l) << endl;
    }

    delete[] a;
    delete[] b;

    return 0;
}
