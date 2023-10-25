#include <iostream>
using namespace std;

int main() {

    int *a = new int;
    float *b = new float;
    char *c = new char;

    cout << "Enter an integer: " << endl;
    cin >> *a;

    cout << "Enter a float: " << endl;
    cin >> *b;

    cout << "Enter a char: " << endl;
    cin >> *c;

    cout << "Your values are: " << *a << ", "
         << *b << ", " << *c << endl;

    delete a;
    delete b;
    delete c;

    a = nullptr;
    b = nullptr;
    c = nullptr;

    return 0;
}
