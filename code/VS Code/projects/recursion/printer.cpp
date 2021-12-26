#include <iostream>
using namespace std;

void inc (int OP , int pointer)
{
    if(pointer<0)
    {
        return;
    }

    cout<<(OP-pointer)<<" ";
    inc(OP , (pointer-1));
    return;
}

void dec (int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    dec(n-1);
    return;
}

int main ()
{
    int n;
    cin>>n;
    dec(n);
    cout<<endl<<endl;
    inc(n,(n-1));
    cout<<endl;
    return 0;
}