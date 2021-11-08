#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  string chuck = "this is a simple string bruh";
  vector<int> scores(200);
  cout << scores[1] << endl;
  chuck += " dude";
  cout << chuck.substr(3, 12) << endl;
  chuck.insert(0, "BRUH ");
  cout << chuck;
}