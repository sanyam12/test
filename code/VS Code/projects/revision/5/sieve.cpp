#include <iostream>
using namespace std;

int primeSieve (int n)
{
    int arr[100] = {0};
    for(int i=2; i<=n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=(i*i); j<=100; j+=i)
            {
                arr[j]=1;
            }
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}

int main ()
{
    int n;
    cin>>n;

    primeSieve(n);
    return 0;
}