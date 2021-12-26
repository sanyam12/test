#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print(vector<int> arr, int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool pal(vector<int> arr, int start, int end)
{
    string s;
    for(int i=start;i<=end;i++)
    {
        s.append(to_string(arr[i]));
    }
    end = s.size()-1;
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]!=s[end])
        {
            //cout<<s[i]<<" "<<s[end]<<endl;
            return false;
        }
        end--;
    }
    return true;
}

bool subarray(vector<int> arr, int n, int k)
{
    int start = 0;
    if(pal(arr,start,k-1))
    {
        print(arr,start,k-1);
        return true;
    }

    for(int i=k;i<n;i++)
    {
        start++;
        if(pal(arr,start,i))
        {
            print(arr,start,i);
            return true;
        }
    }
    return false;
}

int main ()
{
    vector<int> arr ;//= {2,3,5,11,5};
    if(!subarray(arr,arr.size(),3))
    {
        cout<<"Not found\n";
    }
    //cout<<pal(arr,2,4)<<endl;
    return 0;
}