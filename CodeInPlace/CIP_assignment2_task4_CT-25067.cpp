//Car Speed Tracker

#include <iostream>
#include<string>
using namespace std;

class car{
    string brand;
    int currentspeed =0;
    int maxspeed;
    public:
    car(string b, int maxS)
    {
        brand = b;
        maxspeed = maxS;
    }
    void accelerate(int delta)
    {
        currentspeed += delta;
        if(currentspeed > maxspeed )
        {
            currentspeed = maxspeed;
        }

    }
    void brake(int delta)
    {
        currentspeed -= delta;
        if(currentspeed < 0 )
        {
            currentspeed = 0;
        }

    }
    void display()
    {
        cout<<"brand: "<<brand<<"\n current speed: "<<currentspeed<<"km/h"<<endl;
        cout<<"Max speed :"<<maxspeed<<"km/h"<<endl;
    }
};
int main() {
car c1("Toyota", 180);
c1.accelerate(50);
c1.accelerate(100);
c1.accelerate(60);
c1.brake(200);
c1.display();
    return 0;
}