#include <iostream>
using namespace std;

void greet(string name, string greeting);
void greet(string name = "guest");
int main() {
    greet("Ali");
    greet("Sara","hi");
    greet();
    return 0;
}
void greet(string name, string greeting)
{
    cout<<greeting<<","<<name<<"!"<<endl;
}
void greet(string name )
{
    cout<<"helllo, "<<name<<"!"<<endl;
}