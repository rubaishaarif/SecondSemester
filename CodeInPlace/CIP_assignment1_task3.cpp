#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int t=0;
    t=a;
    a=b;
    b=t;
}
int main() {
int first,second;
cin>>first>>second;
cout<<"Before swap\n"<<first<<"\n"<<second<<endl;
swap(first, second);
cout<<"After swap\n"<<first<<"\n"<<second;
    return 0;
}