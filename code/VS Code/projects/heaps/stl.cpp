#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main ()
{
    priority_queue<int,vector<int> > pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(15);
    pq.push(100);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    return 0;
}