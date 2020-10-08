#include<iostream>
#include <string>
using namespace std;

class Invoice
{
 public:
  Invoice( string, string, int, int );
  string getNumber();
  string getDescription();
  int getQuantity();
  int getItemPrice();
  int getInvoiceAmount();
  void setDescription(string);
  void setNumber( string );
  void setQuantity(int);
  void setItemPrice(int);
 private:
  string Number;
  string Description;
  int Quantity;
  int itemPrice;
};
Invoice::Invoice( string e, string f, int g, int h )
{
 Number=e;
 Description=f;
 if(g>0)
  Quantity=g;
 else
 {
  Quantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
 if(h>0)
  itemPrice=h;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
void Invoice::setNumber( string e)
{
 if ( e.length() <= 20 )
  Number = e;
 if ( e.length() > 20 )
 {
  Number = e.substr( 0, 20 );
  cout << "Name \"" << e <<"\" exceeds maximum length (20).\n"<< "Limiting partNumber to first 20 characters.\n" << endl;
 }
}
void Invoice::setDescription(string f )
{
 if ( f.length() <= 20 )
  Description = f;
 if ( f.length() > 20 )
 {
  Description = f.substr( 0, 20 );
  cout << "Name \"" << f <<"\" exceeds maximum length (20).\n"<< "Limiting partDescription to first 20 characters.\n" << endl;
 }
}
void Invoice::setQuantity(int g )
{
 if(g>0)
  Quantity=g;
 else
 {
  Quantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
}
void Invoice::setItemPrice(int h )
{
 if(h>0)
  itemPrice=h;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
string Invoice::getNumber()
{
 return Number;
}
string Invoice::getDescription()
{
 return Description;
}
int Invoice::getQuantity()
{
 return Quantity;
}
int Invoice::getItemPrice()
{
 return itemPrice;
}
int Invoice::getInvoiceAmount()
{
 return Quantity*itemPrice;
}
int main()
{
 Invoice Invoice1("aq11","elemen",4,99);
 Invoice Invoice2("pd99","metode",7,111);
 cout << "EXCERCISE 3 \n";
 cout << "===========\n\n";
 cout << "===============================================\n";
 cout << "Invoice 1\n";
 cout << "=========\n";
 cout << "Initial number is                 : "<< Invoice1.getNumber()<< "\nDescription is                    : "<< Invoice1.getDescription()<<endl;
 cout << "Quantity per item is              : "<< Invoice1.getQuantity()<< "\nPrice per item is                 : "<< Invoice1.getItemPrice()<< endl;
 cout << "Total amount is                   : "<<Invoice1.getInvoiceAmount()<<endl;
 cout << "===============================================\n";
 cout << "\n";
 cout << "===============================================\n";
 cout << "Invoice 2\n";
 cout << "=========\n";
 cout << "Initial number is                 : "<< Invoice2.getNumber()<< "\nDescription is                    : "<< Invoice2.getDescription()<<endl;
 cout << "Quantity per item is              : "<< Invoice2.getQuantity()<< "\nPrice per item is                 : "<< Invoice2.getItemPrice()<< endl;
 cout << "Total amount is                   : "<<Invoice2.getInvoiceAmount()<<endl;
 cout << "===============================================\n";
}
