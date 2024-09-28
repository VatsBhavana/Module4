//4.Write a C++ Program display Student Mark sheet using Multiple inheritance


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
class Marks
{
	protected:
		int phy,chem,math,total;
		float percentage;
    public:
    	void setdata()
    	{
    		cout<<"\n Enter The Physics Marks:";
    		cin>>phy;
    		cout<<"\n Enter The Chemistry Marks:";
    		cin>>chem;
    		cout<<"\n Enter The Math Marks:";
    		cin>>math;
		}
		void getdata()
		{
			cout<<"\n Physics Marks:"<<phy;
			cout<<"\n Chemistry Marks:"<<chem;
			cout<<"\n Math Marks:"<<math;
		}
		void calculatemarks()
		{
			total=phy+chem+math;
			cout<<"\n Total Marks:"<<total;
		}
		void calculatepercentage()
		{
			percentage=(float)total / 3;
			cout<<"\n Percentage ="<<percentage;
		}
		
};
class Marksheet:public Student,public Marks
{
	public:
		void display()
		{
			cout<<"\n Marks_Sheet:";
		    getvalue();
		    getdata();
		    calculatemarks();
		    calculatepercentage();
		}
};
int main()
{
	Marksheet m1;
	m1.setvalue();
	m1.setdata();
	m1.display();
	
	return 0;
}
