#include <bits/stdc++.h>
using namespace std;

map<int,int> fibs;

int fib(int n)
{
    if(n==0 || n==1)
    {
        return 0;
    }

    if(n==2)
    {
        return 1;
    }
    
    if(fibs[n] != 0)
    {
        return n;
    }

    int res = fib(n-1)+fib(n-2);
    fibs[n] = res;
    return fibs[n];

}

int main()
{
    int n;
    cin>>n;

    cout<<fib(n)<<endl;

    return 0;
}