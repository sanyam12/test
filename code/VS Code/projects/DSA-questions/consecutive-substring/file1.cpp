#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    string s;cin>>s;
    vector<int> arr(26,-1);


    int ans =-1, start =-1, first =-1, end = -1;
    for(int i=0; i<s.length(); i++)
    {
        if(arr[ (s[i]-'a') ] >start)
        {
            //ans = max(ans,i-start);
            start = arr[ (s[i]-'a')];
        }
        arr[ (s[i]-'a') ] = i;
        ans = max(ans,i-start);
    }

    cout<<ans<<" "<<start<<endl;
    return 0;
}
//start -1
// p 0
// e -1
// k -1
// w 1