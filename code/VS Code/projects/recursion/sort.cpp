#include <iostream>
using namespace std;

bool sort (int arr[], int n)
{
    if(n==1)
    {
        return true;
    }

    if((arr[0]<arr[1]) && (sort( (arr+1) , n-1)==true) ) 
    {
        return true;
    } else
        return false;
}

int main ()
{
    int arr[] = {1,2,3,4,6,5,7};
    cout<<sort(arr , 7)<<endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int main ()
// {
//     int arr[] = {1,2,3,4,5,6,7};
//     bool sorted = true;
//     for(int i=1; i<7; i++)
//     {
//         if(arr[i-1]>arr[i])
//         {
//             sorted = false;
//         }
//     }

//     cout<<sorted<<endl;
//     return 0;
// }