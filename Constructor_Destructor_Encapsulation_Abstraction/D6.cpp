/*6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include<iostream>
using namespace std;
class Employee
{
	private:
		string name;
		int id;
		char grade;
	public:
		Employee(string n,int i,char g)
		{
			name=n;
			id=i;
			grade=g;
		}
		void setsalary()
		{
			if(grade=='A')
			{
				cout<<"\n Salary Is="<<100000;
			}
			else if(grade=='B')
			{
				cout<<"\n Salary Is="<<80000;
			}
			else
			{
				cout<<"\n Salary Is="<<50000;
			}
			
		}
		void display()
		{
			cout<<"\n Employee Name:"<<name;
			cout<<"\n Employee Id:"<<id;
			cout<<"\n Employee Performance:"<<grade;
		}
};
int main()
{

	Employee e1("bhavana",1,'A');
   e1.display();
   e1.setsalary();
   return 0;
}
	
	
