#include <iostream>
using namespace std;

int correctpos (int arr[], int i) {
    int pos = -1;
    for(int j=0; j<i; j++)
    {
        if(arr[j]>arr[i])
        {
            //cout<<"I found "<<i<<" should go at "<<j<<"\n \n";
            return j;
        }
    }
    return -1;
}

int main () {
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for (int i=1; i<n; i++)
    {
        if(arr[i-1]>arr[i])
        {
            //* you have to sort things up here now... *//
            int pos = correctpos(arr, i);

            //movement
            int temp = arr[i];
            for(int j=(i-1); j>(pos-1); j--)
            {
                //cout<<"j is "<<j<<" and i is "<<i<<" and pos is "<<pos<<"\n";
                //cout<<"giving "<<(j+1)<<" value of "<<j<<"\n";
                arr[j+1] = arr[j];
            }
            arr[pos] = temp;
            //cout<<"giving "<<pos<<" value of "<<i<<"\n";
        }
    }

    //output
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}