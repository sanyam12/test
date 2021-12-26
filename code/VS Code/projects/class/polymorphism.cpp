#include <iostream>
using namespace std;

class MyClass {
public:
    void func()
    {
        cout<<"this is a function with no arguments.\n";
    }
    void func(int a)
    {
        cout<<"this is a function with an int argument.\n";
    }
    void func(double a)
    {
        cout<<"this is a function with a double argument.\n";
    }
};

class complex
{
public:
    int real;
    int imaginary;
    complex(int x, int y)
    {
        real = x;
        imaginary = y;
    }

    void printadd(int r, int i)
    {
        cout<<r<<" + "<<i<<" i\n";
    }
    void operator + (complex &a)
    {
        real = real + a.real;
        imaginary = imaginary + a.imaginary;
        printadd(real, imaginary);
    }
};

int main ()
{
    complex c1(2,4);
    complex c2(3,5);
    (c1+c2);
    return 0;
}