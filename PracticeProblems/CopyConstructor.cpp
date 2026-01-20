#include <iostream>
using namespace std;
    class student{
      public:
      int roll;
      string name;
    };
int main() {
student s1;
s1.roll = 121;
s1.name = "ayesha";
student s2 = s1;
cout<<"roll : "<<s2.roll<<endl;
cout<<"name : "<<s2.name;



    return 0;
}