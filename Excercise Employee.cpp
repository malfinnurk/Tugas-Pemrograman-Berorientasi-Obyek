#include<iostream>
#include <string>
using namespace std;

class Employee
{
 public:
  Employee( string, string, int );
  string getFirstName();
  string getLastName();
  void setLastName(string);
  void setFirstName( string );
  void setMonthlySalary(int);
  int getMonthlySalary();

 private:
  string firstName;
  string lastName;
  int monthlySalary;
};
Employee::Employee( string a, string b, int c)
{
 firstName=a;
 lastName=b;
 if(c>0)
  monthlySalary=c;
 else
 {
  monthlySalary=0;
  cout<<"Initial salary was invalid."<<endl;
 }
}
void Employee::setFirstName( string a)
{
 if ( a.length() <= 20 )
  firstName = a;
 if ( a.length() > 20 )
 {
  firstName = a.substr( 0, 20 );
  cout << "Name \"" << a <<"\" exceeds maximum length (20).\n"<< "Limiting firstName to first 20 characters.\n" << endl;
 }
}
void Employee::setLastName(string b )
{
 if ( b.length() <= 20 )
  lastName = b;
 if ( b.length() > 20 )
 {
  lastName = b.substr( 0, 20 );
  cout << "Name \"" << b <<"\" exceeds maximum length (20).\n"<< "Limiting lastName to first 20 characters.\n" << endl;
 }
}
void Employee::setMonthlySalary(int c)
{
 if(c>0)
  monthlySalary = c;
 else
 {
  monthlySalary=0;
  cout<<"Initial salary was invalid."<<endl;
 }
}

string Employee::getFirstName()
{
 return firstName;
}
string Employee::getLastName()
{
 return lastName;
}
int Employee::getMonthlySalary()
{
 return monthlySalary;
}
int main()
{
 Employee Employee1("Billy","jay",1500);
 Employee Employee2("Bio","One",2000);
 cout << "EXCERCISE 2 \n";
 cout << "===========\n\n";
 cout << "Employee1's name is : "<< Employee1.getFirstName()<<" "<< Employee1.getLastName()<<endl;
 cout << "================================\n";
 cout << "Monthly salary is : "<< Employee1.getMonthlySalary()<< endl;
 cout << "Annual salary is : "<< Employee1.getMonthlySalary()*12<< endl;
 cout << "=====================================\n";
 cout<<"After 10 percent increment in salary :"<<endl;
 cout << "=====================================\n";
 int incrementedSalary1=Employee1.getMonthlySalary();
 incrementedSalary1=incrementedSalary1+(incrementedSalary1*0.1);
 Employee1.setMonthlySalary(incrementedSalary1);
 cout<< "Employee monthly salary is : "<< Employee1.getMonthlySalary()<< endl;
 cout << "Annual salary is : "<< Employee1.getMonthlySalary()*12<<endl<<endl;

 cout << "Employee2's name is : "<< Employee2.getFirstName()<<" "<< Employee2.getLastName()<<endl;
 cout << "================================\n";
 cout << "Monthly salary is : "<< Employee2.getMonthlySalary()<< endl;
 cout << "Annual salary is : "<< Employee2.getMonthlySalary()*12<< endl;
 cout << "=====================================\n";
 cout<<"After 10 percent increment in salary"<<endl;
 cout << "=====================================\n";
 int incrementedSalary2=Employee2.getMonthlySalary();
 incrementedSalary2=incrementedSalary2+(incrementedSalary2*0.1);
 Employee2.setMonthlySalary(incrementedSalary2);
 cout << "Employee monthly salary is : "<< Employee2.getMonthlySalary()<< endl;
 cout << "Annual salary is : "<< Employee2.getMonthlySalary()*12<< endl;
}
