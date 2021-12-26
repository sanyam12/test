#include <iostream>
#include <algorithm>
using namespace std;

// int maxascii (string s , int n) {

//     return ans;
// }

int main()
{

    string s = "93582";
    // int n = s.length();

    // int counter = n;

    // for(int i=0; i<=n; i++)
    // {
    //     int ans = -1;
    //     int max = -1;

    //     for(int i=0; i<=n; i++)
    //     {
    //         if(max<int(s[i]))
    //         {
    //             max = int(s[i]);
    //             ans = i;
    //         }
    //     } 
    //     cout<<s[ans];
    //     s.erase(ans, 1);
    //     counter--;
    // }

    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    return 0;
}