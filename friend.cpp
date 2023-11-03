#include<iostream>

using namespace std;

class A
{
	private:
		int x,y;
		
		public:
			friend void fun();
};

void fun()
{
	A obj;
	obj.x=20;
	obj.y=30;
	
	cout<<"x:"<<obj.x<<endl;
	cout<<"y:"<<obj.y;
}

main()
{
	fun();
}
