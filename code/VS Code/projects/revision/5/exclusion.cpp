#include <iostream>
using namespace std;

int gcd (int n1, int n2)
{
    int ans = (n1-n2);
    if(ans<0)
    {
        ans = - ans;
    }

    //cout<<ans<<" ";

    while (ans!=0)
    {
        n1=n2;
        n2=ans;
        ans = (n1-n2);
        if(ans<0)
        {
            ans = - ans;
        }
        //cout<<"me"<<ans<<" ";
    }
    //cout<<endl;
    
    return n2;
}

int main ()
{
    int n1, n2;
    cin>>n1>>n2;

    cout<<gcd(n1, n2)<<endl;
    return 0;
}