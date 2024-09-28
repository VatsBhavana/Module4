/*8.Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include<iostream>
using namespace std;
class Operation
{
    public:
	       void add(int a,int b)	
	       {
	       	  cout<<"\n Addition Of Two Number:"<<a+b;
		   }
		   void add(float a,float b)
		   {
		   	cout<<"\n addition Of Two Number:"<<a+b;
		   }
		   void sub(int a,int b)
		   {
		   	cout<<"\n Substraction Of Two Number:"<<a-b;
		   }
		   void sub(float a,float b)
		   {
		   	cout<<"\n Substraction Of Two Number:"<<a-b;
		   }
		   void mul(int a,int b)
		   {
		   	cout<<"\n Multiplication Of Two Number:"<<a*b;
		   }
		   void mul(float a,float b)
		   {
		   	cout<<"\n Multiplication Of Two Number:"<<a*b;
		   }
		    void div(int a,int b)
		   {
		   	cout<<"\n Division Of Two Number:"<<a/b;
		   }
		    void div(float a,float b)
		   {
		   	cout<<"\n Division Of Two Number:"<<a/b;
		   }
};
int main()
{
	Operation o1;
	o1.add(2,3);
	Operation o2;
	o2.add(2.5f,3.5f);
	Operation o3;
	o3.sub(3,4);
	Operation o4;
	o4.sub(3.6f,4.6f);
	Operation o5;
	o5.mul(5,6);
	Operation o6;
	o6.mul(2.5f,1.5f);
	Operation o7;
	o7.div(4,2);
	Operation o8;
	o8.div(6.2f,3.3f);
	return 0;
}
