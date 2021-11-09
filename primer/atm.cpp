#include <iostream>

using namespace std;

void showMenu()
{
  cout << "######## MENU ##########" << endl;
  cout << "Select one of the options below" << endl;
  cout << "1: Check balance" << endl;
  cout << "2: Cash Deposit" << endl;
  cout << "3: withdraw Cash" << endl;
  cout << "4: Exit menu" << endl;
}

int showBalance(int balance)
{
  return balance;
}

int depositCash(int balance, int cash)
{
  return balance += cash;
}

int withDrawCash(int balance, int cash)
{
  if (!balance < cash)
    return balance -= cash;
  cout << "Not enough cash";
  return 0;
}

void handleMenuSelection(int option = 0, int balance = 0, int cashDeposit = 0, int withdrawCash = 0)
{

  switch (option)
  {
  case 1:
    cout << "Your balance is: " << showBalance(balance) << endl;
    break;
  case 2:
    cout << "Your balance is: " << depositCash(balance, cashDeposit) << endl;
    break;

  case 3:
    cout << "Your balance is: " << withDrawCash(balance, withdrawCash) << endl;
    break;
  case 4:

    break;
  }
}

int main()
{
  int balance = 500;
  int cashDesposit = 300;
  int withdrawCash = 50;
  int menuInput;
  // atm functionality
  // show menu
  while (menuInput != 4)
  {
    showMenu();
    cin >> menuInput;
    handleMenuSelection(menuInput, balance, cashDesposit, withdrawCash);
  }
  // balance
  // withdraw
  // exit menu
}