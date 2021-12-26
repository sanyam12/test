#include <iostream>
using namespace std;
/* while statement untill we get pointer mid=high

    if arr[mid],
    0: then swap mid and low, low and mid++
    1: mid++
    2: then swap mid and high, high--
*/

void swap (int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}

int main ()
{
    int arr[]={1,1,2,0,0,1,2,2,1,0};
    int low = 0, mid =0, high = 9;

    while (mid!=high)
    {
        if(arr[mid]==0)
        {
            swap(arr,mid,low);
            low++, mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        } else if (arr[mid]==2)
        {
            swap(arr,mid,high);
            high--;
        }
    }

    for(int i=0; i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}