#include <iostream>
#include <cmath>

using namespace std;

bool quadratic(int, int, int, double&, double&);

int main()
{
    int a = 1, b = 7, c = 10;
    double x1, x2;

    cout << quadratic(a, b, c, x1, x2) << endl;
    return 0;
}

bool quadratic(int a, int b, int c, double& x1, double& x2) {

    x1 = (- b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    x2 = (- b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    cout << "First root: " << x1 << endl;
    cout << "Second root: " << x2 << endl;

    if(pow(b, 2) - (4 * a * c) > 0) {
        cout << "Roots are real" << endl;
        return true;
    } else {
        cout << "Roots are not real" << endl;
        return false;
    }
}
