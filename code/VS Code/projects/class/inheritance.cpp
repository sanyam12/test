#include <iostream>
using namespace std;

class App{
    public:
    void Afunc()
    {
        cout<<"A function.\n";
    }
};

class base: public App{
    private:

    public:
    void Bfunc()
    {
        cout<<"B function.\n";
    }
};

class C : public base
{
    public:
    
};
int main ()
{
    C example;
    example.Afunc();
    example.Bfunc();
    return 0;
}