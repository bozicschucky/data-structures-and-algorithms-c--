#include <iostream>

using namespace std;

int gcd(int n, int m)
{
  if (n % m == 0)
  {
    return m;
  }

  return gcd(m, n % m);
}

int main()
{

  cout << "The gcd " << gcd(80844, 25320);
}