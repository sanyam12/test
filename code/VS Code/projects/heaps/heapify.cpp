#include <bits/stdc++.h>
using namespace std;

void func(vector<int> arr, int n)
{
    int i = n-1;
    while(i>=0)
    {
        int largest = i;
        int l = 2*i +1;
        int r = l+1;
        if(l<n && arr[l]>arr[largest])
        {
            largest = l;
        }
        if(r<n && arr[r]>arr[largest])
        {
            largest = r;
        }
    
        if(largest!=i)
        {
        swap(arr[i],arr[largest]);
        }
    }
}

int main ()
{
    vector<int> arr {10,20,30,40};
    
    return 0;
}