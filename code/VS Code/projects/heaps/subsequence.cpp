#include <iostream>
#include <queue>
using namespace std;

void printheap(priority_queue<int, vector<int> > pq)
{
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main ()
{
    int k; cin>>k;
    int arr[] = {1,1,3,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    priority_queue<int, vector<int> >pq;
    
    for(int i=0; i<n;i++)
    {
        pq.push(arr[i]);
    }
    
    int sum = 0, ans = 0;
    while (!pq.empty())
    {
        sum+=pq.top();
        pq.pop();
        ans++;
        //cout<<ans<<" ";

        if(sum>=k)
        {
            //cout<<endl;
            break;
        }
    }
    
    if(sum>ans)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
    return 0;
}