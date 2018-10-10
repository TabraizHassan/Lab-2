#include<iostream>
using namespace std;
class Account {
public:
  Account(double initial_balance)
  {
 balance= initial_balance;
  }



void debit(double withdraw)
{
  if(withdraw<=balance)
  {
  balance=balance-withdraw;
  }
else
{
  cout<<"Debit amount exceeded account balance"<<endl;
}
}

  double getBalance()
  {
    return balance;
  }
private:
  double balance;
};

int main(int argc, char const *argv[])
{
  double withdraw,initial_deposit;
  cout<<"Initial money deposited in bank"<<endl;
  cin>>initial_deposit;
  Account acct1(initial_deposit);
  //cout << "Account 1 Balance is: " <<acct1.getBalance() <<'\n';

  cout<<"How much you want to withdraw money?"<<endl;
  cin>>withdraw;
  acct1.debit(withdraw);
  cout << "Account 1 Remaining Balance is: " <<acct1.getBalance() <<'\n';

  return 0;
}
