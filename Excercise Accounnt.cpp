#include<iostream>
#include <string>
using namespace std;

class Account
{
 public:
  Account(int);
  void credit(int);
  void debit(int);
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int z)
{
 if(z >= 0)
  accountBalance= z;
 else
 {
  accountBalance=0;
  cout<<"Initial balance was invalid."<<endl;
  cout<<"\n";
  cout << "==================================\n";
 }
}
void Account::credit( int z)
{
 accountBalance = accountBalance + z;
}
void Account::debit( int z)
{
 if(accountBalance >= z)
 {
  accountBalance = accountBalance - z;
 }
 else
 {
  cout<<"Debit amount exceeded account balance"<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
 Account Account1(100);
 Account Account2(150);
 cout << "EXCERCISE 1 \n";
 cout << "===========\n\n";
 cout << "Account1's initial balance is : "<< Account1.getAccountBalance()<< "\nAccount2's initial balance is : "<< Account2.getAccountBalance() << endl;
 cout << "===================================";
 Account1.credit(250);
 Account2.credit(64);
 cout << "\nAccount1's balance is : "<< Account1.getAccountBalance()<< "\nAccount2's balance is : "<< Account2.getAccountBalance() << endl;
 cout << "===========================";
 Account1.debit(178);
 Account2.debit(56);
 cout << "\nAccount1's balance is : "<< Account1.getAccountBalance()<< "\nAccount2's balance is : "<< Account2.getAccountBalance() << endl;
 cout << "===========================";
}
