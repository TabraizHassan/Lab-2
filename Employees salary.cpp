#include <iostream>
using namespace std;
class Employee{
public:
Employee()
{
  first_name="tabraiz";
  last_name="hassan";
  balance=45;
}


void set_first_name(string name1)
{
  first_name=name1;
}
string get_first_name()
{
return first_name;
}



void set_last_name(string name2)
{
  last_name=name2;
}
string get_last_name()
{
 return last_name;
}



void setBalance(double monthly_salary)
{
  if(monthly_salary<0)
  {
    balance=0.0;
  }
  else
  balance=monthly_salary;
}
double getBalance()
{
  return balance;
}








private:
double balance;
string first_name;
string last_name;
/*char x1[7]={'T','a','b','r','a','i','z'};
char x2[6]={'H','a','s','s','a','n'};
char y1[5]={'U','z','a','i','r'};
char y2[5]={'N','i','a','z','i'};*/
};



int main(int argc, char const *argv[])
{
  Employee emp1;
  Employee emp2;
  string name1,name2;
  double monthly_salary;
 /*char x[20];
 char y[20];*/
cout<<"Enter first name of employee"<<endl;
cin>>name1;
emp1.set_last_name(name1);
cout<<"Enter last name of employee"<<endl;
cin>>name2;
emp1.set_last_name(name2);


cout << "Enter employees monthly salary" << '\n';
cin>>monthly_salary;
emp1.setBalance(monthly_salary);

cout<<"Name of employee is: "<< emp1.get_first_name()<<" "<<emp1.get_last_name()<<endl;
cout<<"Monthly salary of employee is: "<<emp1.getBalance()<<endl;
}
