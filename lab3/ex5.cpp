#include <iostream>
#include <cmath>

using namespace std;

double findVariance(int arr[], int size);
double findStDeviation(double variance);

int main()
{
    int arr[5] = {600, 470, 170, 430, 300};
    double variance;
    int size =  sizeof(arr) / sizeof(int);

    variance = findVariance(arr, size);

    cout << "Standard Deviation of the array is: " << findStDeviation(variance) << endl;
}

double findVariance(int arr[], int size) {
    int sum = 0, sum2 = 0;
    double mean;
    int power = 2;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    mean = (double)sum / size;

    for (int j = 0; j < size; j++) {
        sum2 += pow((arr[j] - mean), power);
    }

    return (double)sum2 / size;
}

double findStDeviation(double variance) {
    double squareRoot;

    squareRoot = (double) sqrt(variance);

    return squareRoot;
}
