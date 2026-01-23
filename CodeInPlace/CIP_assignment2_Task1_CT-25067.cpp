
#include <iostream>
using namespace std;

class Temperature{
  float celsius;
  public:
  void setTemp(float temp)
  {
      if(temp>=-273.15)
      celsius = temp;
      else
      cout<<"Invalid input!"<<endl;
  }
  float getCelsius()
  { return celsius; }
  
  float getFahrenheit()
  {
      float F;
      F= (celsius * 9.0/5.0) + 32.0 ;
      return F;
  }
    float getKelvin()
  {
      float K;
      K= celsius + 273.15  ;
      return K;
  }
void display()
{
    cout<<"Celsius: "<< getCelsius()<<endl;
    cout<<"Fahrenheit: "<< getFahrenheit()<<endl;
    cout<<"Kelvin: "<< getKelvin()<<endl;
}

};
int main() {
Temperature T;
T.setTemp(25);
T.display();
    return 0;
}