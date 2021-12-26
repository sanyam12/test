#include <bits/stdc++.h>
using namespace std;

map<string, bool> m;

bool fun(string s1, string s2, string s3, int l1, int l2, int l3, int p1, int p2, int p3)
{
    if(p3==l3)
        return (l1==p1 && l2==p2) ? true:false;
    
    string key = to_string(p1)+","+to_string(p2)+","+to_string(p3);
    if(m[key]!=0)
    {
        return m[key];
    }

    if(p2==l2)
    {
        if(s1[p1]==s3[p3])
        {
            return m[key] = fun(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1);
        }else
        {
            return m[key] = false;
        }
    }

    if(p1==l1)
    {
        if(s2[p2]==s3[p3])
        {
            return m[key] = fun(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1);
        }else
        {
            return m[key] = false;
        }
    }

    bool one = false, two = false;
    if(s1[p1]==s3[p3])
    {
        one = fun(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1);
    }
    if(s2[p2]==s3[p3])
    {
        two = fun(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1);
    }

    return m[key] = (one or two);
}

int main()
{
    string s1 = "aabcc";
    string s2 = "dbbca";
    string s3 = "aadbbccabc";

    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = s3.length();
    if(l3!=(l1+l2))
    {
        cout<<"wtf.\n";
        return 0;
    }

    if(fun(s1,s2,s3,l1,l2,l3,0,0,0))
    {
        cout<<"true\n";
    }else
    {
        cout<<"false\n";
    }
    return 0;
}