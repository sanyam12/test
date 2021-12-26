#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void printMedian(float val)
{
    static priority_queue<float,vector<float> > minSet;
    static priority_queue<float,vector<float>,greater<float> > maxSet;
    if(minSet.empty()&&maxSet.empty())
    {
        minSet.push(val);
    } else if(minSet.top()<val)
    {
        maxSet.push(val);
        if(maxSet.size()-minSet.size()>0)
        {
            float temp = maxSet.top();
            maxSet.pop();
            minSet.push(temp);
        }
    } else
    {
        minSet.push(val);
        if(minSet.size()-maxSet.size()>1)
        {
            float temp = minSet.top();
            minSet.pop();
            maxSet.push(temp);
        }
    }

    if(minSet.size()==maxSet.size())
    {
        float ans = (minSet.top() + maxSet.top())/2;
        cout<<ans<<" "<<val<<endl;
    } else
    {
        cout<<minSet.top()<<" "<<val<<endl;
    }
}

void stream(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        printMedian(arr[i]);
    }
}

int main ()
{
    int arr[] = {10,15,21,30,18,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    stream(arr,n);
    return 0;
}