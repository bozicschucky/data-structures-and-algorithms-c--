#include <iostream>
#include <cstdlib>
using namespace std;

//classes

class Counter
{
public:
  Counter();
  int getCount();
  void increaseBy(int x);

private:
  int count;
};

Counter::Counter()
{
  count = 0;
}
int Counter::getCount()
{
  return count;
}
void Counter::increaseBy(int x)
{
  count += x;
}

int main()
{
  Counter c;
  c.increaseBy(5);
  cout << c.getCount() << endl;
  c.increaseBy(50);
  cout << c.getCount() << endl;
  return 0;
}