#include <iostream>
using namespace std;

int GetBit (int n, int position) {
    if( ( n & (1<<position) ) ==0) {
        return 0;
    } else
        return 1;
}

void unique2 (int arr[] , int n)
{
    int xorall = 0;
    for(int i=0; i<n; i++)
    {
        xorall = xorall ^ arr[i];
    }
    //cout<<xorall<<endl;
    int position = -1;
    for(int i=0; i<32; i++) {
        if(GetBit(xorall, i))
        {
            position = i;
            //cout<<i<<endl;
            break;
        }
    }
    // cout<<position<<endl;
    
    int ans =0;

    for(int i=0; i<n; i++)
    {
        if( GetBit(arr[i] , position))
        {
            ans = arr[i] ^ ans;
        }
    }
    
    cout<<ans<<" "<<(ans^xorall)<<endl;
    return;
}

int main ()
{
    int arr[] = {2,4,6,7,4,5,6,2};

    unique2(arr , 8);

    return 0;
}