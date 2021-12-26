#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
    // int n; cin>>n;
    string s;cin>>s;
    int n = s.size();
    int arr[26];
    
    for(int i=0; i<26; i++)
    {
        arr[i] =-1;
    }

    int start = 0, ans =-1;
    int anss = 0, anse = -1;
    for(int i=0; i<n; i++)
    {
        arr[ (s[i]-'a') ] = i;
        if(arr[s[i]-'a']>start)
        {
            if(i-start>ans)
            {
                anse = i-1;
                anss = start;
            }
            ans = max(ans,i-start-1);
            start =i;
        }
    }

    cout<<ans<<endl;
    cout<<anss<<" "<<anse<<endl;
    return 0;
}