#include <iostream>
using namespace std;

class beta
{
public:
    int a;
    void funcA()
    {
        cout<<"this is funcA\n";
    }
protected:
    int c;
    void funcC()
    {
        cout<<"this is funcC\n";
    }

private:
    int b;
    void funcB()
    {
        cout<<"this is funcB\n";
    }
};

int main ()
{
    beta anigma;
    anigma.a=23;
    cout<<anigma.a<<endl;
    anigma.funcA();

    return 0;
}