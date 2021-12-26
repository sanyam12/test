#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    } 
    else if(n==1)
    {
        return 1;
    }
    int ans = 0;
    ans += fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

int main()
{
    cout<<fibonacci(3+3)<<endl;
    return 0;
}