#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n; cin>>n;
    int k; cin>>k;
    vector<int> arr(n);
    for(auto &i:arr)
    {
        cin>>i;
    }

    int i=0, counter = 0, ans =0;
    for(int j=0; i<arr.size(); j++)
    {
        if(arr[j]==0)
        {
            counter++;
        }
        while(counter>k)
        {
            if(arr[i]==0)
            {
                counter--;
            }
            i++;
        }

        ans = max(ans, j-i+1);
    }

    cout<<ans<<endl;
    return 0;
}