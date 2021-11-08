#include <iostream>
#include <string>
using namespace std;

int main()
{
  // we are counting the num of values in the digits entered.
  int num = 0;
  cout << "Enter the number so that we can tell you how many digits are contained in it";
  cin >> num;
  string numString = to_string(num);
  cout << "The number has a length of " << numString.length() << endl;
}