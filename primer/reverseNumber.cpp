#include <iostream>
#include <string>
using namespace std;

string reverseNumber(string number)
{
  string result = "";
  for (int i = number.length() - 1; i >= 0; i--)
  {
    result += number[i];
  }
  return result;
}

int main()
{
  // reverse number entered in the console
  int num = 0;
  string reverseNum;
  cout << "Enter number to reverse " << endl;
  cin >> num;
  string numStr = to_string(num);
  int numLen = numStr.length();
  int counter = numLen;

  while (counter)
  {
    cout << "Counter" << counter << endl;
    reverseNum += numStr[counter - 1];
    counter--;
    if (counter == 0)
      break;
  }

  cout << "Reverse Number is " << reverseNum << endl;
  cout << "Reverse Number" << reverseNumber(numStr) << endl;
}