#include <iostream>
#include <stack>
using namespace std;

void stockSpan(int arr[], int n)
{
    //stack< pair<int,int> > res;
    stack< pair<int,int> > play;

    for(int i=0; i<n; i++)
    {
        pair<int, int> temp;
        temp.first = arr[i];
        temp.second = 1;

        while(!play.empty() && arr[i]>play.top().first)
        {
            temp.second += play.top().second;
            play.pop();
        }
        play.push(temp);
        cout<<temp.second<<" ";
    }

    cout<<endl;
    
}

int main ()
{
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    stockSpan(arr,n);
    return 0;
}