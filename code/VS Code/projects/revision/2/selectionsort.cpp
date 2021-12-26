#include <iostream>
#include <limits>
using namespace std;

void selectsort (int arr[], int n) {
    for(int i=0; i<n; i++)
    {
        int min = INT_MAX;
        int position = -1;

        for(int j=(i+1); j<n; j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
                position = j;
            }
        }

        if(position != -1)
        {
            int temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
        }
    }

    //output
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main () {
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    selectsort(arr, n);

    //output
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}