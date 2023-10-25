#include <iostream>
using namespace std;

int main() {

    int input;
    cout << "Enter an integer value: " << endl;
    cin >> input;

    int **p = new int*[input];

    for (int a = 0; a < input; a++) {
        *(p+a) = new int[input];
    }

    for (int i = 0; i < input; i++) {

        for(int j = 0; j <= i; j++) {
            if (i == j || j == 0) {
                p[i][j] = 1;
            } else {
                p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
            }

            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    delete[] p;

    return 0;
}
