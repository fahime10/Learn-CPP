#include <iostream>
#include <cmath>

using namespace std;

int fact(int n);
double exp(double x, int n);

int main()
{
    cout << exp(2, 1) << endl;
    return 0;
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

double exp(double x, int n) {
    double approx, sum, value = 0;

    for(int i = 1; i <= n; i++) {
        sum = ((pow(x, i)) / fact(i));
        value += sum;
    }

    approx = 1 + value;
    return approx;
}
