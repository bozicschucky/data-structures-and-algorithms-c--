#include <iostream>
#include <string>
using namespace std;

void prompt(string prompt)
{
  cout << prompt << endl;
}

int main()
{
  int attempts = 3;
  int counter = 0;
  string password;

  while (counter <= attempts - 1)
  {
    prompt("Enter password");
    getline(cin, password);
    if (password == "pass")
    {
      cout << "Welcome!";
      break;
    }
    else
    {
      cout << "Wrong password!" << endl;
      cout << "number of attempts is " << counter << endl;
    }
    counter++;
  }
}