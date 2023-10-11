#include <iostream>

using namespace std;

int area(int);
double area(double);
int area(int, int);
double area(double a, double b);

int main()
{
    int x = 7;
    double y = 14.5;
    int z = 10;
    double w = 20.0;

    cout << "Square area: " << area(x) << endl;
    cout << "Circle area: " << area(14.5) << endl;
    cout << "Rectangle area: " << area(x, z) << endl;
    cout << "Ellipse area: " << area(y, w) << endl;
    
    return 0;
}

// Area of a square
int area(int s) {
    return s * s;
}

// Area of a circle
double area(double r) {
    const double PI = 3.14;
    return PI * r * r;
}

// Area of a rectangle
int area(int l, int w) {
    return l * w;
}

// Area of an ellipse
double area(double a, double b) {
    const double PI = 3.14;
    return PI * a * b;
}
