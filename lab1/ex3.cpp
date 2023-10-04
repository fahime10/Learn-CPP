#include <iostream>
using namespace std;

int main()
{
  int x, sum = 0, iterations = 0;

  cout << "Type a number: ";
  cin >> x;

  while(x > 0) {
    sum += x;
    iterations++;
    cout << "Another number, type 0 to stop: ";
    cin >> x;
  }

  double avg = (double)sum / iterations;

  cout << "The average is: " + to_string(avg) + "\n";

  return 0;
}
