#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    if(n>0 && (n&(n-1)) == 0)
    return true;
    
    else
    return false;
}
int main() {
    int num;
    cin>>num;
    cout<<"the number is : "<<num<<endl;
    if(isPowerOfTwo(num))
        cout<<"power of two"<<endl;
    else
    cout<<"not a power of two";

return 0;
}