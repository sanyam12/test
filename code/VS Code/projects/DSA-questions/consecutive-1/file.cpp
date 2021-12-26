#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n; cin>>n;
    int k; cin>>k;
    vector<int> arr(n);
    for(auto &i : arr)
    {
        cin>>i;
    }

    int zerocntr = 0,  i=0, ans = 0;
    for(int j=0; j<arr.size(); j++)
    {
        if(arr[j]==0)
        {
            zerocntr++;
        }
        while(zerocntr>k)
        {
            if(arr[i] == 0)
            {
                zerocntr--;
            }
            i++;
        }

        ans = max(ans, j-i+1);
    }

    cout<<ans<<endl;
    return 0;
}