#include <iostream>
using namespace std;
class Employee{
public:
  Employee()
  {

  }
Employee(string f_name , string l_name , double mon_salary)
{
  first_name=f_name;
  last_name=l_name;
  monthly_salary=mon_salary;
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



void setBalance(double balance)
{
  if(balance<0)
  {
    monthly_salary=0.0;
  }
  else
  {monthly_salary=balance;}

}
double getBalance()
{
  return monthly_salary;
}


double get_yearly_salary()
{
  double yearly_salary = monthly_salary * 12;
  return  yearly_salary;
                        }

double get_yearly_profit()
{
  double yearly_profit= get_yearly_salary() *0.1;
  yearly_profit=yearly_profit+get_yearly_salary();
        return yearly_profit;        }


private:
double monthly_salary;
string first_name;
string last_name;

};



int main(int argc, char const *argv[])
{
  Employee emp1("tabraiz" , "hassan" , 45);
  Employee emp2;
  string name1,name2;
  double monthly_salary;




cout<<"Name of employee 1 is: "<< emp1.get_first_name()<<" "<<emp1.get_last_name()<<endl;
cout<<"Monthly salary of employee 1 is: "<<emp1.getBalance()<<endl;




cout<<"Yearly salary of employee 1 is: "<<emp1.get_yearly_salary()<<endl;
cout<<"Yearly profit of employee 1 is: "<<emp1.get_yearly_profit()<<endl;

cout<<'\n'<<endl;

cout<<"Enter first name of employee 2"<<endl;
cin>>name1;
emp2.set_first_name(name1);
cout<<"Enter last name of employee 2"<<endl;
cin>>name2;
emp2.set_last_name(name2);


cout << "Enter employee 2's monthly salary" << '\n';
cin>>monthly_salary;
emp2.setBalance(monthly_salary);



cout<<"Name of employee 2 is: "<< emp2.get_first_name()<<" "<<emp2.get_last_name()<<endl;
cout<<"Monthly salary of employee 2 is: "<<emp2.getBalance()<<endl;
cout<<"Yearly salary of employee 2 is: "<<emp2.get_yearly_salary()<<endl;
cout<<"Yearly profit of employee 2 is: "<<emp2.get_yearly_profit()<<endl;



}
