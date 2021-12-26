#include <iostream>
using namespace std;

int expo(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    int prev = expo(n , (p-1));
    return (n*prev);
}

int main ()
{
    int n,p;
    cin>>n>>p;
    cout<<expo(n,p)<<endl;

    return 0;
}