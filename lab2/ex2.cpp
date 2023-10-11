#include <iostream>

using namespace std;

void sortNumbers(int&, int&, int&);

int main()
{
    int a = 900, b = 20902, c = 700;
    sortNumbers(a, b, c);
    return 0;
}

void sortNumbers(int& x, int& y, int& z) {
    int minimum, middle, maximum;

    minimum = min(min(x, y), min(y, z));
    maximum = max(max(x, y), max(y, z));

    if (min(max(x, y), max(y, z)) == y) {
        middle = max(min(x, y), min(y, z));
    } else {
        middle = min(max(x, y), max(y, z));
    }

    cout << "Ascending: " << minimum
         << " " << middle << " " << maximum
         << endl;
}
