#include "CreditCard.h"; //provides class CreditCard

using namespace std; //makes std:: accessible

CreditCard::CreditCard(const string &no, const string &nm, int lim, double bal)
{
  number = no;
  name = nm;
  limit = lim;
  balance = bal;
}

// make a charge
bool CreditCard::chargeIt(double price)
{
  if (price + balance > double(limit))
  {
    return false; //cannot charge because limit exceeded
  }
  balance += price;
  return true; //charge successful
}

void CreditCard::makePayment(double payment)
{
  balance -= payment; //make a payment
}

ostream &operator<<(ostream &out, const CreditCard &c)
{
  //print card information
  out << "Credit Card Number: " << c.getNumber() << endl;
  out << "Name: " << c.getName() << endl;
  out << "Balance: " << c.getBalance() << endl;
  out << "Limit: " << c.getLimit() << endl;
  return out;
}