#include <iostream>
using namespace std;

int main() 
{
  int x;
  int binaryNum[32];

  cout << "Type a number: ";

  cin >> x;

  int i = 0;

  while(x > 0) {
    binaryNum[i] = x % 2;
    x = x / 2;
    i++;
  }

  for(int j = i - 1; j >= 0; j--) {
    cout << binaryNum[j];
  }

  return 0;
}
