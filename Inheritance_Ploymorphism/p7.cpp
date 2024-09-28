/*7. Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/

#include<iostream>
using namespace std;
class Parent
{
	public :
		Parent()
		{
			cout<<"\n Parent Class Constructor Called";
		}
};
class Child : public Parent
{
	public :
		Child()
		{
			cout<<"\n Child Class Constructor Called";
		}
};
class GrandChild : public Child
{
	public :
		GrandChild()
		{
			cout<<"\n GrandChild Class Constructor Called";
		}
};
int main()
{

	GrandChild gc1;
	return 0;
}
