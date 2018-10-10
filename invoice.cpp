#include <iostream>
using namespace std;
class Invoice{
public:
Invoice(string p_number, string part_d, int q, double p)
{
part_number= p_number;
part_description= part_d;
quantity=q;
price=p;
}

void set_part_number(string part)
{
part_number=part;
}
string get_part_number()
{
return part_number;
}


void set_part_description(string description)
{
part_description=description;
}
string get_part_description()
{
return part_description;
}



void set_quantity(int quant)
{

  quantity=quant;


}

int get_quantity()
{
return quantity;
}


void set_price(int amount)
{

  price=amount;


}


double get_price()
{

return price;
}

double get_Invoice_Amount()
{
  if(price<0)
  {
    price=0.0;
  }
  if(quantity<0)
  {
    quantity=0.0;
  }
double invoice_amount= price*quantity;
return invoice_amount;

}



private:

double amount;
string part_number;
string part_description;
int quantity;
double price;



};
int main(int argc, char const *argv[])
{
Invoice inv1("three","cups",2,100);

cout<<"Part number is: "<<inv1.get_part_number()<<endl;
cout<<"Part description is: "<<inv1.get_part_description()<<endl;
cout<<"Quantity of item being sold is: "<<inv1.get_quantity()<<endl;
cout<<"Price of single item is: "<<inv1.get_price()<<endl;
cout<<"Invoice amount is: "<<inv1.get_Invoice_Amount()<<endl;
}
