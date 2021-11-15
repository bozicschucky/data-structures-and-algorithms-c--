#include <iostream>

using namespace std;

class Progression
{
public:
  Progression(long f = 0) : first(f), cur(f) {}
  virtual ~Progression(){};
  void printProgression(int n);

protected:
  virtual long nextValue();
  virtual long firstValue();

protected:
  long first;
  long cur;
};

void Progression::printProgression(int n)
{
  cout << firstValue();
  for (int i = 2; i <= n; i++)
  {
    cout << " " << nextValue();
  }
  cout << endl;
};

long Progression::nextValue()
{

  return ++cur;
}

long Progression::firstValue()
{
  cur = first;
  return cur;
}

class ArithmeticProgression : public Progression
{
public:
  ArithmeticProgression(long i = 1);

protected:
  virtual long nextValue();

protected:
  long inc;
};

ArithmeticProgression::ArithmeticProgression(long i) : Progression(), inc(i){};

long ArithmeticProgression::nextValue()
{
  cur += inc;
  return cur;
}

class GeometricProgression : public Progression
{
public:
  GeometricProgression(long i = 2);

protected:
  virtual long nextValue();

protected:
  long base;
};

GeometricProgression::GeometricProgression(long i) : Progression(1), base(i){};

long GeometricProgression::nextValue()
{
  cur *= base;
  return cur;
};

class FibonacciProgression : public Progression
{
public:
  FibonacciProgression(long f = 0, long s = 1);

protected:
  virtual long firstValue();
  virtual long nextValue();

protected:
  long second;
  long prev;
};

FibonacciProgression::FibonacciProgression(long f, long s) : Progression(f), second(s), prev(second - first){};

long FibonacciProgression::firstValue() // reset
{
  cur = first;
  prev = second - first; // create fictitious prev
  return cur;
}

long FibonacciProgression::nextValue() //advance the progression
{
  long temp = prev;
  prev = cur;
  cur += temp;
  return cur;
}

int main()
{
  Progression *prog;

  cout << "Arithmetic Progression with default increment:\n";
  prog = new ArithmeticProgression();
  prog->printProgression(10);

  cout << "Arithmetic Progression with increment 5:\n";
  prog = new ArithmeticProgression(5);
  prog->printProgression(10);

  cout << "Geometric Progression with default base:\n";
  prog = new GeometricProgression();
  prog->printProgression(10);

  cout << "Geometric Progression with base 3:\n";
  prog = new GeometricProgression(3);
  prog->printProgression(10);

  cout << "Fibonacci Progression with default first value:\n";
  prog = new FibonacciProgression();
  prog->printProgression(10);

  cout << "Fibonacci Progression with start values 4 and 6:\n";
  prog = new FibonacciProgression(4, 6);
  prog->printProgression(10);

  // ArithmeticProgression ap(2);
  // ap.printProgression(10);
  // GeometricProgression gp(2);
  // gp.printProgression(10);
  // FibonacciProgression fp(0, 10);
  // fp.printProgression(10);
  return 0;
}