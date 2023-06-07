#include<iostream>
#include<string.h>
using namespace std;

 class employee
 {
 	private:
 	int id;
 	char name[100];
 	char role[100];
 	char salary[15];
 	int exp;
 	char address[100];
 	char email[90];
 	char contact[11];
 
    public:
    	
   	void IN()
    {
 	cout<<"Enter your ID->";
 	cin>>id;
 	cout<<"Enter your Name->";
 	cin>>name;
 	cout<<"Enter your Role->";
 	cin>>role;
 	cout<<"Enter your Salary->";
 	cin>>salary;
 	cout<<"Enter your Experience->";
 	cin>>exp; 
 	cout<<"Enter your Address->";
 	cin>>address;
 	cout<<"Enter your Email->";
 	cin>>email;
 	cout<<"Enter your Contact Details->";
 	cin>>contact;
   }
   void OUT()
   {
 	cout<<"ID              ->"<<id<<endl;
 	cout<<"Name            ->"<<name<<endl;
 	cout<<"Role            ->"<<role<<endl;
 	cout<<"Salary          ->"<<salary<<endl;
 	cout<<"Experience      ->"<<exp<<endl;
 	cout<<"Address         ->"<<address<<endl;
 	cout<<"Email           ->"<<email<<endl;
 	cout<<"Contact Details ->"<<contact<<endl;
   }
 };
int main()
 {
 	employee e1,e2,e3,e4,e5;
 	
 	e1.IN();
 	cout<<endl;
 	e2.IN();
 	cout<<endl;
 	e3.IN();
 	cout<<endl;
 	e4.IN();
 	cout<<endl;
 	e5.IN();
 	
	 cout<<"_______________________________________________________________"<<endl;
 	
 	e1.OUT();
 	cout<<endl;
 	e2.OUT();
 	cout<<endl;
 	e3.OUT();
 	cout<<endl;
 	e4.OUT();
 	cout<<endl;
 	e5.OUT();
 	return 0;
 }
