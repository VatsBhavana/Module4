/*6. Write a C++ Program to show access to Private Public and Protected using
Inheritance*/

#include<iostream>
using namespace std;
class Student
{
	protected:
		string name;
		int roll;
	public:
		void setvalue()
		{
			cout<<"\n Enter The Name:";
			cin>>name;
			cout<<"\n Enter The Roll Number:";
			cin>>roll;
		}
		void getvalue()
		{
			cout<<"\n Name:"<<name;
			cout<<"\n Roll Number:"<<roll;
		}
};
class Marks:public Student
{
	private:
		int marks;
	public:
		void setdata()
		{
			cout<<"\n Enter The Marks:";
			cin>>marks;
		}
		void getdata()
		{
			cout<<"\n Marks:"<<marks;
		}
};
int main()
{
   Marks m1;
   m1.setvalue();
   m1.setdata();
   m1.getvalue();
   m1.getdata();
}
