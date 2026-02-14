//Q5
#include<iostream>
#include<cstring>
using namespace std;

class hotel{
	string name;
	float rent;
	const float charge;
	int days;
	
	
	public:
		hotel(string n, int d) : charge(1000.85) {
			name = n;
			days =d;
            rent = 0;
			
		}
		void Rent(int d)//input numer of days
		{
			days = d;
			if (d >7)
			{
				d = d-1;
				rent = (d*charge); //calculaTE DISCOUNT
			}
			else
			{
            rent = (d*charge); }
		}	

		float getRent() const{
			return rent;
		}	
	void display()
	{
		cout<<"Customer name : "<<name<<endl;
		cout<<"Days : "<<days<<endl;
		cout<<"Rent : "<<rent<<endl;
	}
};
int main() {
    hotel h("Ali", 8);
    hotel e("Alina", 5);
    h.Rent(8);
    e.Rent(5);
    h.display();
    e.display();
}
