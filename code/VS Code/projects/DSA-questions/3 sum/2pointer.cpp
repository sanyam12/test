#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
        
    // }
    

    

    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;

        arr.push_back(temp);
    }
    cout<<"obervations have been recorded\n";
    sort(arr.begin(), arr.end());
    bool found = false;
    
    for(int i=0; i<n; i++)
    {
        int lo = i+1, hi = n-1;
        while(lo<hi)
        {
            int current = arr[i] + arr[lo] + arr[hi];
            if(current == target)
            {
                found = true;
                break;
            }
            else if(current<target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }

    if(found)
    {
        cout<<"True\n";
    } else
    {
        cout<<"False\n";
    }
    return 0;
}