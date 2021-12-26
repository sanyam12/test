#include <iostream>
using namespace std;

void duplicate (int arr[],string s, int i, int n)
{
    if(i==n)
    {
        return;
    }

    if(arr[ ((int)s[i] - 'a') ]==0)
    {
        arr[(int)s[i]-'a']=1;
        cout<<s[i];
        duplicate(arr,s,i+1,n);
    } else
    {
        duplicate(arr,s,i+1,n);
    }
}

int main ()
{
    string s = "aaaabbbeeecdddd";
    int arr[26] = {0};

    duplicate(arr,s,0,s.size());
    cout<<endl;
    return 0;
}