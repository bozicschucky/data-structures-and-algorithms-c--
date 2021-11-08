#include <vector>       //provides stl vector
#include "CreditCard.h" //provides CreditCard class, cout,string
#include "CreditCard.cpp"

using namespace std;
void testCard()
{
  vector<CreditCard *> wallet(10); // vector of 10 pointers to CreditCard objects

  wallet[0] = new CreditCard("5329 2143 2131 3743", "John Bowman", 2500);
  wallet[1] = new CreditCard("5398 3292 3232 7654", "John Bowman", 3500);
  wallet[0] = new CreditCard("9898 6492 7032 7654", "John Bowman", 5000);

  for (int i = 0; i < 16; i++)
  {
    cout << i << " the wallet to charge";
    wallet[0]->chargeIt(double(i)); // make some charges and cast to double
    wallet[1]->chargeIt(2 * i);     // implicitly cast to double
    wallet[2]->chargeIt(3 * i);     // implicitly cast to double
  }
  cout << "Card payments:\n";
  for (int i = 0; i < 3; i++)
  {
    cout << *wallet[i]; // print out the credit card
    while (wallet[i]->getBalance() > 100)
    {
      wallet[i]->makePayment(100);
      cout << "New balance: " << wallet[i]->getBalance() << endl;
    }
    cout << "\n";
    delete wallet[i]; // clean up memory
  }
}

int main()
{
  testCard(); //main function
  return 0;   // success execution
}
