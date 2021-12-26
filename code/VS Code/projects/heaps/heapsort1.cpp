#include <iostream>
#include <vector>
using namespace std;

void printheap(vector<int> arr, int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(vector<int> &arr, int n, int i)
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
        heapify(arr,n,largest);
    }
}

void buildheap(vector<int> &arr, int n)
{
    int s = (n/2)-1;
    for(int i=s; i>=0;i--)
    {
        heapify(arr,n,i);
    }
}

void heapsort(vector<int> arr, int n)
{
    vector<int> ans;
    while(!arr.empty())
    {
        swap(arr[0],arr[n-1]);
        ans.push_back(arr[n-1]);
        arr.pop_back();
        heapify(arr,n,0);
    }

    printheap(ans,ans.size());
}


int main ()
{
    vector<int> arr {20,50,40,5,10,30};
    buildheap(arr,arr.size());
    heapsort(arr,arr.size());


    printheap(arr,arr.size());


    cout<<is_heap(arr.begin(),arr.end())<<endl;
    return 0;
}