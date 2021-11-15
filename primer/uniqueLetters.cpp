#include <iostream>
#include <string>

using namespace std;

//generate unique combinations of strings for characters passed into the function

// void

void printPossibleUniqueStringsFromCharacters(char a, char b, char c, char d, char e, char f)
{
  string allCharacters;
  allCharacters.push_back(a);
  allCharacters.push_back(b);
  allCharacters.push_back(c);
  allCharacters.push_back(d);
  allCharacters.push_back(e);
  allCharacters.push_back(f);

  //generate the different combinations of the allCharacters string
  // and print them out

  cout << allCharacters;
}

int main()
{
  printPossibleUniqueStringsFromCharacters('a', 'b', 'c', 'd', 'e', 'f');
}