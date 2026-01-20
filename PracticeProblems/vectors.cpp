#include<iostream>
#include<cmath>
using namespace std;
class Vector{
    float x,y;
    public:
        Vector(float a,float b) //constructor
        {
            x = a;
            y = b;
        }

        Vector add(Vector &obj)  //obj=v2
        {
            Vector result(x + obj.x, y + obj.y );
            //result.x = x + obj.x;
            //result.y = y + obj.y;
            return result;
        }
        Vector sub(Vector &obj)
        {
            Vector result(x - obj.x , y - obj.y);
            return result;
        }    
        float mul(Vector &obj)
        {
            float result(x * obj.x + y * obj.y);
            return result;
        }
        float magnitude()
        {
           float  result(x*x + y*y );
            return sqrt(result);
        }
//        float magnitude_2()
//        {
//           float result(obj.x*obj.x + obj.y*obj.y );
//            return sqrt(result);
//        }




        void display()
  {
      cout<<x<<","<<y<<endl;
  }

};
int main()
{
    Vector v1(2,3);
    Vector v2(4,5);
    
    Vector sum = v1.add(v2);
    cout<<"sum = ";
    sum.display();
    
    Vector diff = v1.sub(v2); 
    cout<<"Subtraction = ";
    diff.display();
    
    
    float product = v1.mul(v2);
    cout<<"Product = "<<product<<endl;
    
    float mag1 = v1.magnitude();
    cout<<"Magnitude of v1 = "<<mag1<<endl;
    
    float mag2 = v2.magnitude();
    cout<<"Magnitude of v2 = "<<mag2<<endl;
    
    return 0;
    

}