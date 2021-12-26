#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

bool has[MAX][2];


void search(int val)
{
    if(val>0)
    {
       if(has[val][0]==1)
        {
            cout<<"present\n";
        }else
        {
            cout<<"not present\n";
        }
    } else
    {
        if(has[abs(val)][1]==1)
        {
            cout<<"present\n";
        }else
        {
            cout<<"not present\n";
        }
    }
    
}

void insert(vector<int> arr, int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            has[arr[i]][0] = 1;
        else
            has[abs(arr[i])][1] = 1;
    }
}

int main ()
{
    vector<int> arr {1,2,3,4,-5};
    int n = arr.size();
    insert(arr,n);
    search(5);
    return 0;
}