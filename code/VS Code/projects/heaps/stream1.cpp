#include <bits/stdc++.h>
using namespace std;

void average(float val)
{
    static priority_queue<float, vector<float> > minNum;
    static priority_queue<float, vector<float>, greater<float> > maxNum;

    if(minNum.empty() && maxNum.empty())
    {
        minNum.push(val);
    } else if(minNum.top()<val)
    {
        maxNum.push(val);
        if(maxNum.size()-minNum.size()>0)
        {
            int temp = maxNum.top();
            maxNum.pop();
            minNum.push(temp);
        }
    } else
    {
        if(minNum.size()-maxNum.size()==0)
        {
            minNum.push(val);
        } else
        {
            minNum.push(val);
            int temp = minNum.top();
            minNum.pop();
            maxNum.push(temp);
        }
    }

    if(maxNum.size()==minNum.size())
    {
        float avg = (maxNum.top()+minNum.top())/2;
        cout<<avg<<endl;
    } else if(minNum.size()-maxNum.size()==1)
    {
        cout<<minNum.top()<<endl;
    }
}

void stream(vector<int> arr)
{
    for(int i=0; i<arr.size();i++)
    {
        average(arr[i]);
    }
}

int main ()
{
    vector<int> arr {10,15,21,30,18,19};
    stream(arr);
    return 0;
}