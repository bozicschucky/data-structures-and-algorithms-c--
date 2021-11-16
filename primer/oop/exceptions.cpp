#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class RunTimeException
{
public:
  RunTimeException(const string &err) { message = err; };
  string getMessage()
  {
    return message;
  }

private:
  string message;
};

int main()
{
  RunTimeException err("yo error");
  // throw invalid_argument("received wrong inputs");
  throw err.getMessage();
  // cout << err.getMessage();
}