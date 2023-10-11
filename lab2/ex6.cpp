#include <iostream>

using namespace std;

int fibonacci(int n);

int main()
{
    int n = 7;

    cout << "Fibonacci sequence in position " << n
         << " is: " <<  fibonacci(n) << endl;

    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }  else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
