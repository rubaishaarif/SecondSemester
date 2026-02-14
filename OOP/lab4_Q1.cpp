//Q1
#include <iostream>
#include<cstring>
using namespace std;
class Employee{
    char *name;
    const int ID;
    public:
    Employee(const char* n, int id) :ID(id) 
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
    void setName(const char* n) {
        strcpy(name, n);
    }
    char* getName()  {
        return name;
    }
    int getId() {
        return ID; }
    ~Employee() {
        delete[] name;
    }
    void display()
    {
        cout<<"name = "<<getName()<<endl;
        cout<<"ID = "<<getId()<<endl;
    }
};

int main() {
    
Employee e1("ali",  678);
Employee e2("amna",  688);
Employee e3("haris",  670);
e1.setName("Ali");
e2.setName("haya");
e3.setName("dua");
e1.display();
e2.display();
e3.display();
return 0;
}