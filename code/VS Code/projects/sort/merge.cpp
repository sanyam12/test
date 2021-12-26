#include <iostream>
using namespace std;
void merge (int arr[], int s,int mid, int e)
{
    int n1= mid-s+1;
    int n2= e-mid;

    int a1[n1];
    int a2[n2];     //temp arrays

    for(int i=0; i<n1; i++)
    {
        a1[i]=arr[s+i];
    }

    for(int i=0; i<n2; i++)
    {
        a2[i]=arr[mid+1+i];
    }

    int p1=0;
    int p2=0;
    int counter = s;
    while ( (p1<n1) && (p2<n2))
    {
        if(a1[p1]>a2[p2])
        {
            arr[counter]=a2[p2];
            counter++; p1++;
        } 
        else
        {
            arr[counter]=a1[p1];
            counter++; p2++;
        }
    }

    while (p1<n1)
    {
        arr[counter]=a1[p1];
        counter++; p1++;
    }
    
    while (p2<n2)
    {
        arr[counter]=a2[p2];
        counter++; p2++;
    }
    // if(p1!=(n1-1))
    // {
    //     arr[counter]=a1[n1-1];
    //     counter++; p1++;
    // } else if(p2!=(n2-1))
    // {
    //     arr[counter]=a2[n2-1];
    //     counter++; p2++;
    // }
    
}

void mergesort (int arr[], int s, int e)
{
    
    if(s<e)
    {
        int mid = (s+e)/2;
        mergesort(arr, s, mid);
        mergesort(arr, mid+1, e);

        merge(arr,s, mid, e);
    }
}

int main ()
{
    // int n;
    // cin>>n;

    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }

    int arr[]= {5,4,3,2,1};
    mergesort(arr,0, 4);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}