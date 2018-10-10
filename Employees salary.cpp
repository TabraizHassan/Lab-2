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

};



int main(int argc, char const *argv[])
{
  Employee emp1;
  Employee emp2;
  string name1,name2;
  double monthly_salary;

cout<<"Enter first name of employee 1"<<endl;
cin>>name1;
emp1.set_last_name(name1);
cout<<"Enter last name of employee 1"<<endl;
cin>>name2;
emp1.set_last_name(name2);


cout << "Enter employee 1's monthly salary" << '\n';
cin>>monthly_salary;
emp1.setBalance(monthly_salary);

cout<<"Name of employee 1 is: "<< emp1.get_first_name()<<" "<<emp1.get_last_name()<<endl;
cout<<"Monthly salary of employee 1 is: "<<emp1.getBalance()<<endl;

cout<<'\n'<<endl;

cout<<"Enter first name of employee 2"<<endl;
cin>>name1;
emp2.set_last_name(name1);
cout<<"Enter last name of employee 2"<<endl;
cin>>name2;
emp2.set_last_name(name2);


cout << "Enter employee 2's monthly salary" << '\n';
cin>>monthly_salary;
emp2.setBalance(monthly_salary);

cout<<"Name of employee 2 is: "<< emp2.get_first_name()<<" "<<emp2.get_last_name()<<endl;
cout<<"Monthly salary of employee 2 is: "<<emp2.getBalance()<<endl;


}
