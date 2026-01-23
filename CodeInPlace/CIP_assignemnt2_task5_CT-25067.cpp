// Student Grade Manager (Encapsulation + Validation)

#include <iostream>
#include<string>
using namespace std;

class SGrades{
  string name;
  int num=0; //count
  float grade[5];
  public:
  SGrades(string n){
      name = n;
  }
  bool addGrade(float g)
  {
      if(g<0 || g>100)
      {
          cout<<"invalid grade :"<<endl;
          return false;
      }
      if(num>=5)
      {
          cout<<"limit exceeded"<<endl;
          return false;
      }
      grade[num] = g;
      num++;
      return true;
}
  float getAvg()
  {
      if(num==0)
      return 0;
      float sum=0;
      for(int i=0;i<num;i++)
      {
          sum += grade[i];
      }
      float avg = sum/num;
      return avg;
  }
  void report()
  {
      cout<<"Name: "<<name<<endl;
      for(int i=0;i<num;i++)
      {
          cout<<grade[i]<<" ";
      }
      cout<<"\n average :"<<getAvg();
  }
};
int main() {
 SGrades s("ali");
 s.addGrade(85);
 s.addGrade(92);
s.addGrade(78);
 s.addGrade(88);
 s.addGrade(105);
 s.addGrade(90);
 s.report();

    return 0;
}