#include <iostream>
#include <queue>
#include <vector>
#define rep(s,a,b) for(int s=a;i<b;i++)
using namespace std;

int main ()
{
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,0,n)
    {
        cin>>a[i];
    }

    priority_queue<int,vector<int>, greater<int>> heap;

    for(int i=0;i<n;i++)
    {
        heap.push(a[i]);
    }

    int time = 0;
    while (heap.size()!=1)
    {
        int one = heap.top();
        heap.pop();
        int two = heap.top();
        heap.pop();

        time += one + two;
        heap.push(one+two);
    }
    
    cout<<time<<endl;
    return 0;
}