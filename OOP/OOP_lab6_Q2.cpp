#include <iostream>
using namespace std;
class Calculator{
    int Num1, Num2, Num3;
    public:
    Calculator(int a=0, int b=0, int c=0)
    {
        Num1 = a;
        Num2 = b;
        Num3 = c;
    }
    int add(int a, int b)
    {
        int result = a+b;
        return result;
    }
    int add(int a, int b, int c)
    {
        int result = a+b+c;
        return result;
    }
    int mul(int a, int b)
    {
        int result = a*b;
        return result;
    }
    int mul(int a, int b, int c)
    {
        int result = a * b * c;
        return result;
    }
    int sub()
    {
       int result =  Num1 - Num2- Num3;
       return result;
    }
    float div(float a, float b)
    {
        float result = a/b;
        return result;
    }
};
    int main()
    {
        Calculator c(32,6,7);
//        c.add(1,4);
//        c.add(3,7,9);
//        c.mul(5,8,22);
//        c.mul(2,4);
//        c.sub();
//        c.div(39,8);
//        
        cout<<c.add(1,4)<<endl;
        cout<<c.add(3,7,9)<<endl;
        cout<< c.mul(5,8,22)<<endl;
        cout<<c.mul(2,4)<<endl;
        cout<<c.sub()<<endl;
        cout<<c.div(39,8)<<endl;
        return 0;
     } 
    
    