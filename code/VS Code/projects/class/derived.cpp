#include <iostream>
using namespace std;

class base {
public:
    void print()
    {
        cout<<"this is the print function of the base class.\n";
    }
    void display()
    {
        cout<<"this is the display functions of the base class.\n";
    }
};

class derived: public base 
{
public:
    void print()
    {
        cout<<"this is the print function of the derived class.\n";
    }
    void display()
    {
        cout<<"this is the display functions of the derived class.\n";
    }
};

int main ()
{
    base *baseptr;
    derived obj;
    baseptr = &obj;

    baseptr ->display();
    baseptr ->print();
    return 0;
}