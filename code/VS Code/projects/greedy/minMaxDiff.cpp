#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());
    long long fmax = 0, smax = 0;

    for(int i=0;i<(n/2);i++)
    {
        fmax+=arr[i+(n/2)];
        smax+=arr[i];
    }
    
    

    long long odd = 0, even = 0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even+=arr[i];
        } else
        {
            odd+=arr[i];
        }
    }
    cout<<abs(even-odd)<<" ";
    cout<<abs(fmax-smax)<<endl;
    return 0;
}