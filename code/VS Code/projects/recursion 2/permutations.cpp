#include <iostream>
#include <string>
using namespace std;

void permutations(string src, string ans)
{
    if(src.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i <src.length() ; i++)
    {
        char c=src[i];
        string ros = src.substr(0,i) + src.substr(i+1);
        permutations(ros,ans+c);
    }
    return;
}

int main ()
{
    string src = "1234";
    permutations(src,"");
    return 0;
}