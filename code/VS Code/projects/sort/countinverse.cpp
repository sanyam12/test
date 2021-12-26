#include <iostream>
using namespace std;
void merge(int arr[], int s, int mid, int e, bool activate)
{
    int n1 = mid-s+1;
    int n2 = e-mid;
    int a[n1], b[n2];

    for(int i=0; i<n1; i++)
    {
        a[i]=arr[s+i];
    }

    for(int i=0; i<n2; i++)
    {
        b[i]=arr[mid+1+i];
    }

    // for(int i=0; i<n2; i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    //cout<<endl;
    if(activate==true)
    {
        int j=0;
        while (j<n2)
        {
            for(int i=0; i<n1; i++)
            {
                if(a[i]>b[j])
                {
                    cout<<"("<<a[i]<<","<<b[j]<<")"<<endl;
                }
            }
            j++;
        }
        
    }

    int i=0, j=0, k=s;
    while(i<n1&&j<n2)
    {
        if(a[i]>b[j])
        {
            arr[k]=b[j];
            j++; k++;
        } 
        else 
        {
            arr[k]=a[i];
            i++;k++;
        }
    }
    
    //remember to set the last missed item...
    while(i<n1)
    {
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++; k++;
    }
}

void mergesort(int arr[], int s, int e, int n)
{
    if(s<e)
    {
        bool activate = false;
        if(e-s==n)
        {
            activate = true;
        }
        int mid = (s+e)/2;
        mergesort(arr,s,mid,n);
        mergesort(arr,mid+1,e,n);

        merge(arr,s,mid,e,activate);
    }
}
int main ()
{
    int arr[]= {3,5,6,9,1,2,7,8};
    mergesort(arr,0, 7,7);
    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}