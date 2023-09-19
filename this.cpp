//This pointer:- To specify the variables and parameter.

#include<iostream>

using namespace std;
class demo
{
	public:
		int a,b;
		void inputData(int a, int b)
		{
			this->a=a;
			this->b=b;
		}
		
		void displayData()
		{
			cout<<"\na = "<<a;
			cout<<"\nb = "<<b;
		}
};

main()
{
	demo d;
	
	d.inputData(10,20);
	d.displayData();
}
