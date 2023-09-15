//constructor:- it is a special method that will call automatically when we create a object we don't need to call  the constructor as
//it call automatically.

//note:- class name and constructor name always be same

#include<iostream>
using namespace std;

class student
{
	public:
		student()             //default constructor
	 	{
			cout<<"Welcome to the constructor\n";
			
		}
		student(int a,int b)          //parameterize constructor
		{
			cout<<"a = "<<a;
			cout<<"\nb = "<<b;
		}
};

main()
//object creation
{
student s1=student();
student s2=student(10,20);
}

