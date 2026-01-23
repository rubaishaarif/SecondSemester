//Digital Clock (Hours & Minutes Only)

#include <iostream>
using namespace std;

class Clock{
    int hrs, min;
    public:
    Clock(int h, int m){
        if(h>=0 && h<=23 && m>=0 && m<=59)
      {  hrs = h;
        min = m; }
        else
         { hrs = 0;
        min = 0; }
    }
    void setTime(int h, int m)
    {
      if(h>=0 && h<=23 && m>=0 && m<=59)
      {  hrs = h;
        min = m; }
        else
       { hrs = 0;
        min = 0; }
    }
    void tick()
    {
        min = min+1;
        if(min == 60)
        {
            min = 0;
            hrs = hrs + 1;
        }
        if(hrs == 24){
            hrs = 0;
            min = 0;
        }
    }
    void display()
    {
        cout<<hrs<<":"<<min;
    }
};
int main() {
Clock c(23,58);
c.setTime(23,59);
c.tick();
c.display();
    return 0;
}