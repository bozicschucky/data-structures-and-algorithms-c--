#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CreditCard
{
public:
  CreditCard();
  CreditCard(string cardNumber, string name, int limit, double balance);
  void setName(string name);
  void setCardNumber(string cardNumber);
  void setBalance(double balance);
  string getName();
  string getCardNumber();
  double getBalance();
  void chargeCard(int price);
  void makePayment(int payment);

private:
  string name;
  string cardNumber;
  int limit;
  double balance;
};

// std::ostream &operator<<(std::ostream &out, const CreditCard &c);

CreditCard::CreditCard()
{
  name = "";
  cardNumber = "";
  limit = 0;
  balance = 0.0;
}

CreditCard::CreditCard(string cardNumber, string name, int limit, double balance = 0.0)
{
  this->cardNumber = cardNumber;
  this->name = name;
  this->limit = limit;
  this->balance = balance;
}

void CreditCard::setName(string name)
{
  this->name = name;
}

void CreditCard::setCardNumber(string cardNumber)
{
  this->cardNumber = cardNumber;
}

void CreditCard::setBalance(double balance)
{
  this->balance = balance;
}

string CreditCard::getName()
{
  return name;
}

string CreditCard::getCardNumber()
{
  return cardNumber;
}

double CreditCard::getBalance()
{
  return balance;
}

void CreditCard::chargeCard(int price)
{
  if (price > balance)
  {
    cout << "You don't have enough cash" << endl;
    return;
  }

  if (price > limit)
  {
    cout << "You can't charge more than " << limit << endl;
  }
  else
  {
    balance -= price;
    cout << "Charge successful. New balance: " << balance << endl;
  }
}

void CreditCard::makePayment(int payment)
{
  balance += payment;
  cout << "Payment successful. New balance: " << balance << endl;
}

int main()
{
  // CreditCard card("123456789", "John Doe", 500, 2000);
  // card.chargeCard(500);
  // card.makePayment(100);
  // cout << card.getName() << endl;
  // cout << card.getCardNumber() << endl;
  // card.chargeCard(500);
  // card.chargeCard(500);
  // card.chargeCard(500);
  // card.chargeCard(500);
  // cout << card.getBalance() << endl;

  vector<CreditCard *> wallet(10); // vector of 10 pointers to CreditCard objects

  wallet[0] = new CreditCard("5329 2143 2131 3743", "John Bowman", 3000, 4000);
  wallet[1] = new CreditCard("5398 3292 3232 7654", "John Bowman", 2000, 3000);
  wallet[0] = new CreditCard("9898 6492 7032 7654", "John Bowman", 1000, 2000);

  // for (int i = 0; i < 16; i++)
  // {
  //   cout << i << " the wallet to charge";
  //   wallet[0]->chargeCard(double(i)); // make some charges and cast to double
  //   wallet[1]->chargeCard(2 * i);     // implicitly cast to double
  //   wallet[2]->chargeCard(3 * i);     // implicitly cast to double
  // }
  cout << "Card payments:\n";
  for (int i = 0; i < 3; i++)
  {
    cout << &wallet[i] << endl; // print out the credit card
    while (wallet[i]->getBalance() > 100)
    {
      wallet[i]->chargeCard(100);
      cout << "New balance: " << wallet[i]->getBalance() << endl;
    }
    cout << "\n";
    delete wallet[i]; // clean up memory
  }

  return 0;
}