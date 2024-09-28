/*1. Write a program to find the multiplication values and the cubic values using
inline function*/


#include<iostream>
using namespace std;
inline mul(int num1,int num2)
{
	return num1*num2;
}
inline cubic(int num1)
{
	return num1*num1*num1;
}
int main()
{
	int  num1,num2;
	cout<<"\n Enter The Number1:";
	cin>>num1;
	cout<<"\n Enter The Number2:";
	cin>>num2;
	cout<<"\n Multiplication Of "<<num1<<" and "<<num2<<" is "<<mul(num1,num2);
	cout<<"\n Cubic Is="<<cubic(num1);
	return 0;
}
