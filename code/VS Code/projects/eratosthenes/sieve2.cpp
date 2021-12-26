#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;
    int arr[(n+1)];

    for(int i=0;i<=n; i++)
    {
        arr[i]=i;
    }

    for(int i=2; i<=n; i++)
    {
        if(arr[i]!='\0')
        {
            for(int j=i*i ; j<=n; j+=i)
            {
                cout<<"j "<<j<<endl;
                arr[j]='\0';
            }
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(arr[i]!='\0')
        {
            cout<<i<<" ";
        }
    }

    cout<<endl;
    return 0;
}