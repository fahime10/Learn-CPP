#include <iostream>
using namespace std;

int main()
{
  int x, sum = 0;
  string result = "";

  cout << "Type a number: ";

  cin >> x;

  for(int i = 1; i < x; i++) {
    if(x % i == 0) {
      sum += i;
    }
  }

  if(sum == x) {
    result = to_string(x) + " is a perfect number";
  } else {
    result = to_string(x) + " is not a perfect number";
  }

  cout << result;
  return 0;
}
