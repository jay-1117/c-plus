n//Encapsulation:- It is the process of wrapping of data in a single entity.
//
//It provides security to the data.

#include <iostream>

using namespace std;

class student
{
	public:
		int id;
		string name;
		string subject;
		
		void setID(int id)
		{
			this->id=id;
		}
		
		int getID()
		{
			return this->id;
		}
		
		void setname(string name)
		{
			this->name=name;
		}
		
		string getname()
		{
			return this->name;
		}
		
		void setsubject(string subject)
		{
		 this->subject=subject;
		}
		
		string getsubject()
		{
			return this->subject;
			
		}

		
		
};


main()
{
	student s1;
	
	s1.setID(10);
	cout<<s1.getID();
	
	s1.setname("\njay");
	cout<<s1.getname();
	
	s1.setsubject("\ncse");
	cout<<s1.getsubject();
	
}
