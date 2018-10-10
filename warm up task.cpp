#include<iostream>
using namespace std ;
class Account{
public:
Account(double initial_balance)
{
balance=initial_balance;
                        }

 void credit (double amount)
{
balance=amount+balance;
                        }

double getBalance ()
{
return balance;
                }
private:
double balance ;
};


int main(int argc, char const *argv[])
{
Account acct1 (45);
cout << "Account 1 Balance is: " <<acct1.getBalance() <<'\n';
acct1 . credit (2323);
cout << "Account 1 Balance is: " <<acct1.getBalance() <<'\n';
return 0 ;
            }
