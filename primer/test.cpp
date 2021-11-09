#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// R.1-7
int sumOfIntsSmallerThanN(int n)
{
  int sum = 0;
  for (int i = 1; i < n; i++)
  {
    if (i < n)
    {
      sum += i;
    }
  }
  return sum;
}

// R.1-8
// long isMultipleOf(long n, long m)
// {
//   if (n % m == 0)
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }
long isMultiple(long n, long m)
{
  if (n % m == 0)
  {
    return 1;
  }
}

struct Pair
{
  /* data */
  int Age;
  float Salary;
};

int main()
{
  struct Pair test;
  test.Age = 10;
  test.Salary = 1000.0;
  // cout << "Age: " << test.Age << endl;
  // cout << "Salary: " << test.Salary << endl;
  // system("cls");

  // R-1.6
  // string s = "abc";
  // string t = "cde";
  // s += s + t[1] + s;
  // cout << s << endl;

  // R-1.7
  // const equation = y + (2 * z) + +(< 3 - (w / 5));

  // R-1.6
  double *dp[10];
  for (int i = 0; i < 10; i++)
  {
    /* code */
    dp[i] = (double *)malloc(sizeof(double));
    *dp[i] = 0.01;
  }

  for (int i = 0; i < 10; i++)
  {
    /* code */
    cout << *dp[i] << endl;
  }

  cout << "sum of ints smaller than N " << sumOfIntsSmallerThanN(4) << endl;
  return 0;
}