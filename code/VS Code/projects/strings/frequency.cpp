#include <iostream>
using namespace std;

int main () {

    string s = "iu hfg i uf ghf ig ads if yiaefi";

    int freq[26];

    for(int i=0; i<26; i++)
    {
        freq[i]=0;
    }

    for(int i=0; i<s.size() ; i++)
    {
        freq[int(s[i])-'a']++;
    }

    char ans = 'a';
    int max = 0;
    for(int i=0; i<26; i++)
    {
        if(max<freq[i])
        {
            max = freq[i];
            ans = i+ 'a';
        }
    }

    cout<<max<<" "<<ans<<endl;

    return 0;
}