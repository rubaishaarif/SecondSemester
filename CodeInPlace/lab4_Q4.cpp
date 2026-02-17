//Q4
#include<iostream>
using namespace std;

class demo{
	const int pass;
	int id;
	public:
		demo(int ID, int p) : pass(p){
			id = ID;
		}
		void set(int ID)
		{
			id = ID;
		}

		int getID()
		{
			return id;
		}
		int getPassword() const
		{
			return pass;
		}
		void print()
		{
			cout<<"ID : "<<getID();
			cout<<"\n Password : "<<getPassword()<<endl;
		}
		
};
int main()
{
	demo d(123, 56789);
	d.print();
	d.set(345);
	d.print();
	
}
