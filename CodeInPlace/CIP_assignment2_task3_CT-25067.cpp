//Bank Account with Transaction Log (Mini Project)

#include <iostream>
#include<vector>
#include<string>
 using namespace std;
 
class BankAccount{
  vector<string> trans_log;
  int  total;
  public:
  BankAccount(int balance)
  {
      total = balance;
      trans_log.push_back("Your balance is :" + to_string(balance));
  }
  void deposit(int balance)
  {
      cout<<"deposit amount :"<<balance<<endl;
      total = total + balance;
      trans_log.push_back("Deposited $" + to_string(balance));
  }
    void withdraw(int balance)
  {
      cout<<"withdraw amount :"<<balance<<endl;
      if(balance<=total)
      {
      total = total - balance;
      trans_log.push_back("Withdrew $" + to_string(balance));
      }
  }
  void info()
  {
      for(string s : trans_log)
      {
          cout<<s<<endl;
      }
      cout<<"remaining balance : "<<total<<endl;
  }
  
  
    
};
int main() {
BankAccount b(5000);
b.deposit(4);
b.deposit(60);
b.withdraw(10);
b.info();

    return 0;
}