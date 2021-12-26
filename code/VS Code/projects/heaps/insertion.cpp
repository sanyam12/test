#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int l = 2*i +1;
    int r = 2*i +2;

    if(l<n && arr[l]>arr[largest])
    {
        largest = l;
    }

    if(r<n && arr[r]>arr[largest])
    {
        largest = r;
    }

    if(largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr,n,largest);
    }
}

void buillheap(vector<int> &arr)

{
    int s = (arr.size()/2)-1;
    for(int i=s; i>=0;i--)
    {
        heapify(arr,arr.size(), i);
    }
}

void insert(vector<int> &arr, int val)
{
    arr.push_back(val);
    for(int i=arr.size();i>=0;i--)
        heapify(arr,arr.size(),0);
}

void deleteheap(vector<int> &arr)
{
    swap(arr[0],arr[arr.size()-1]);
    arr.pop_back();
    heapify(arr,arr.size(),0);
}

void heapsort(vector<int> & arr)
{
    for(int i=arr.size()-1; i>=0;i--)
    {
        heapify(arr,arr.size(),i);
    }
}

void printheap(vector<int> arr)
{
    for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main ()
{
    vector<int> arr {4,10,3,5,1};
    printheap(arr);
    heapsort(arr);
    printheap(arr);
    auto s = arr[0];
    auto n = arr.size();
    cout<<is_heap(s,s+n)<<endl;
    return 0;
}