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

  if (option == 1)
  {
    cout << "balance is " << showBalance(balance) << endl;
  }

  if (option == 2)
  {
    cout << "Deposit of cash success your balance is " << depositCash(balance, cashDeposit) << endl;
  }

  if (option == 3)
  {
    cout << "Withdraw of cash successful" << withDrawCash(balance, withdrawCash);
  }

  if (option == 4)
  {
    return;
  }
}

int main()
{
  int balance = 500;
  int cashDesposit = 300;
  int withdrawCash = 50;
  int menuInput;
  // atm functionality
  //show menu
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