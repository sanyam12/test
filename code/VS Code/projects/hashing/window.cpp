#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main ()
{
    int n,k; cin>>n>>k;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    int sum = 0, ans = INT_MAX;
    for(int i=0; i<k;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<" ";
    ans = min(sum,ans);
    for(int i=k;i<n;i++)
    {
        sum = sum +arr[i] - arr[i-k];
        cout<<sum<<" ";
        ans = min(ans,sum);
    }
    cout<<endl;
    cout<<ans<<endl;
    return 0;
}