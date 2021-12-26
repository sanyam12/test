#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    int target; cin>>target;

    sort(arr.begin(), arr.end(), greater<int>());
    int ans = 0;
    for(int i=0; i<n;i++)
    {
        if(target==0)
        {
            break;
        }
        ans += target/arr[i];
        target -= (target/arr[i]) * arr[i];
    }
    cout<<ans<<endl;
    return 0;
}