#include <iostream>
using namespace std;

int main() {
int n,i,sum=0;

cout<<"how many numbers? ";
cin>>n;
int *array = new int[n];
cout<<"Enter numbers: "<<endl;
for(i=0;i<n;i++)
{
    cin>>array[i];
    sum+=array[i];
}
cout<<"Array elements :"<<endl;
for(i=0;i<n;i++)
{
    cout<<array[i]<<endl;
}
cout<<"Sum = "<<sum;
delete[] array;
    return 0;
}