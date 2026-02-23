#include <iostream>
using namespace std;
class Shape{
    protected:
    int numOfSides ;
    float area;
    public:
        Shape(int n ) 
        { numOfSides = n;
        area = 0;
         }

// dont need in this program
//    void setArea(float a) {
//        area = a;
//    }
//    float getArea() {
//        return area;
//    }

    void setSides(int n) {
        numOfSides = n;
    }
    int getSides() {
        return numOfSides;
    }
};
       
class Rectangle : public Shape{
    protected:
        float l, b; //l=length, b = width;
        public:
        Rectangle(float l, float b) : Shape(4) //sides = 4
        {
            this->l = l;
            this->b = b;
        }
        float generateArea( )
        {
            area = l*b;
            return area;
        }       
};
class Square : public Rectangle{
    public:
        Square(float a) : Rectangle( a,a)
        {
//            this-> a = a;
        }
        void CheckSides()
        {
            if(l==b)
             cout << "Sides are equal\n"; 
        else
           
             cout << "Sides are not equal\n";
        }
        
        float generateArea( )
    {
         area = l*b;
         return area;
    }
};
class Circle :public Shape{
    float r; //radius =r
    public:
    Circle(float r) : Shape(0) 
    { this->r = r;
    }
    float generateArea( )
    {
         area = 3.142*r*r;
         return area;
    }
};
class Triangle :public Shape{
    float h,b; //h = height, b = base
    public:
    Triangle(float h, float b) : Shape(3) 
    { 
    this->h = h;
    this-> b = b;
    }
    float generateArea( )
    {
         area = (h*b)/2;
         return area;
    }
};



int main()
{
    Rectangle r(2,6.6);
    cout<<"Area of rectangle : "<<r.generateArea()<<endl;

    Square s(5.6);
    s.CheckSides();
    cout << "Area of square :  " <<s.generateArea() << endl;


    Circle c(4.9);
    cout << "Area of circle :  " << c.generateArea() << endl;


    Triangle t(3, 6);
    cout << "Area of triangle :  " << t.generateArea() << endl;
    return 0;
    
}


















