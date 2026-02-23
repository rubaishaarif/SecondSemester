#include <iostream>
using namespace std;
class Vector{
    float x,y;
    public:
    Vector(float a=0, float b=0)
    {
        x = a;
        y = b;
    }
    Vector operator +(Vector const &other)
    {
        Vector result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }
    Vector operator - (Vector const &other)
    {
        Vector result(x - other.x, y - other.y);
        return result;
    }
    void print()
    {
        cout<<x<<"x + "<<y<<"y"<<endl;
    }
};
int main() {
Vector v1(3.6, 9);
Vector v2(2.6, 3);
Vector sum = v1+v2;
Vector sub = v1-v2;
cout<<"addition result : ";
sum.print();
cout<<"\n subtraction result: ";
sub.print();

    return 0;
}