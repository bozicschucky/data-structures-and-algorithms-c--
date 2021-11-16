#include <iostream>
#include <string>

using namespace std;

// defining getting the min value of 2 values
int integerMin(int a, int b)
{
  return a < b ? a : b;
}

// defining the same using templates to get the min value of 2 values
template <typename T>
T genMin(T a, T b)
{
  return a < b ? a : b;
};

// class implementing templates

template <typename T>
class BasicVector
{
public:
  BasicVector(int capacity = 10);
  T &operator[](int index)
  {
    return a[index];
  }

private:
  T *a;
  int capacity;
};

template <typename T>
BasicVector<T>::BasicVector(int capacity)
{
  this->capacity = capacity;
  // capacity = capacity;
  a = new T[capacity];
}

int main()
{
  BasicVector<int> iv(10);    //vector of 10 ints
  BasicVector<double> dv(10); // vector of 10 doubles
  BasicVector<char> cv(10);   // vector of 10 chars
  BasicVector<string> sv(10); // vector of 10 strings
  iv[0] = 45;
  cout << "iv[0] = " << iv[0] << endl;

  cout << integerMin(5, 10) << endl;
  cout << genMin(5, 10) << endl;
  cout << genMin(1.4, 2.4) << endl;
  cout << genMin('x', 'a') << endl;
  return 0;
};