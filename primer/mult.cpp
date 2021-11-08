#include <iostream>

using namespace std;

int main()
{

  // generate multiplication tables for some numbers

  for (int i = 0; i < 12; i++)
  {
    cout << "multiple of " << i << " \n";
    for (int j = 0; j < 12; j++)
    {
      cout << " i * j "
           << " --> " << i * j << " \n";
    }
    cout << "\n";
  }
}