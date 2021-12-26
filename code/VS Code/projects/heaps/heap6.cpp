#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int l = (2*i)+1;
	int r = (2*i)+2;
	int largest = i;

	if(l<n && arr[l]>arr[largest])
	{
		largest = l;
	}

	if(r<n && arr[r]>arr[largest])
	{
		largest = r;

	}

	if(largest !=i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr,n,largest);
	}

}

void makeheap(int arr[], int n)
{
	int s = (n/2)-1;
	for(int i=s; i>=0; i--)
	{
		heapify(arr,n,i);
	}
}

void printheap(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main ()
{
	int arr[] = {4,10,3,5,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	makeheap(arr,n);
	printheap(arr,n);
	cout<<is_heap(arr,arr+n)<<endl;
	return 0;
}