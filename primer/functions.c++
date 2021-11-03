
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
using std::string;

// functions
void f(int value, int &ref)
{
  value++;
  ref++;
  cout << value << '\n';
  cout << ref << '\n';
}

int main()
{
  int hen = 1;
  int dog = 4;
  f(hen, dog);
  cout << hen << '\n';
  cout << dog << '\n';
}