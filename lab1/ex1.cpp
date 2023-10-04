#include <iostream>
using namespace std;

int main()
{
  int x;
  string output;

  cout << "Type a number: ";

  cin >> x;

  output += to_string(x) + " ";

  while(x != 1) {
    if(x % 2 != 0) {
      x = (x * 3) + 1;
      output += to_string(x) + " ";
    } else {
      x = x / 2;
      output += to_string(x) + " ";
    }
  }

  cout << output;

  return 0;
}
