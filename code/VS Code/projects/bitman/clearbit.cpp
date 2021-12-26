#include <iostream>
using namespace std;

int clearBit (int n, int position)
{
    return (n&  ~((1<<position)) ); 
}

int main ()
{
    int n;
    cin>>n;

    int position;
    cin>>position;

    cout<<clearBit(n , position);

    return 0;
}