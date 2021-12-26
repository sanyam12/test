#include <iostream>
using namespace std;

int last(int arr[], int n, int i, int x, int key)
{
    if(i==n)
    {
        return x;
    }

    if(arr[i]==key)
    {
        x=i;
        cout<<"x is "<<i<<endl;
        return last(arr,n,i+1,x,key);
    } else 
    {
        return last(arr,n,i+1,x,key);
    }
}

int main ()
{
    int arr[] = {4,2,1,2,7,2,7};
    cout<<last(arr,7,0,-1,2)<<endl;
    
    return 0;
}