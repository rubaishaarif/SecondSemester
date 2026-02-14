//Q3
#include<iostream>
using namespace std;

class Account
{
	static int count;
	int acc_no, code;
	float acc_bal;
	public:
		Account(int a, int c, float b)
		{
			acc_no = a;
			code = c;
	        acc_bal = b;
			count++;	        
		}
		int getAccNo()
		{
			return acc_no;
		}
		int getAccBal()
		{
			return acc_bal;
		}
		int getCode()
		{
			return code;
		}
		void print()
		{
			cout<<"Account number : "<<getAccNo()<<endl;
			cout<<"Account balance : "<<getAccBal()<<endl;
			cout<<"Security code : "<<getCode()<<endl;
			cout<<"count : "<<count<<endl;
		}
		};
	int Account::count = 0;

int main()
{
	Account a(123468, 6666, 900.87);
	a.print();
	Account b(183468, 69966, 800.87);
	b.print();
	return 0;
}
