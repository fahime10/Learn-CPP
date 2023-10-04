#include <iostream>

using namespace std;

int main() 
{
  int x, y, z, max = 0;
  double ratio;
  double max_ratio;

  cout << "Type a number: ";

  cin >> x;

  cout << "Second number: ";

  cin >> y;

  for(int i = x; i < y; i++) {
    int j = i;

    while(j != 1) {
      if (j % 2 != 0) {
        j = (j * 3) + 1;

        if(max < j) {
          max = j;
        }
        ratio = (double)max / i;

        if(max_ratio < ratio) {
          max_ratio = ratio;
          z = i;
        }

      } else {
        j = j / 2;

        if(max < j) {
          max = j;
        }

        ratio = (double)max / i;

        if(max_ratio < ratio) {
          max_ratio = ratio;
          z = i;
        }
      }
    }
  }

  cout << "Inputs are: " + to_string(x) + " " + to_string(y) +
    "\n";
  cout << "Output is: " + to_string(z) + " " +
    to_string(max) + " " + to_string(max_ratio) + "\n";

  return 0;
}
