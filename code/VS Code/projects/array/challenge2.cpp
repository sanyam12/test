#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n-2; i++)
    {
        for(int size=2; size<=n-i; size++)
        {
            int sample[size];
            int counter =0;
            for(int j=i; j<=size; j++)
            {
                sample[counter] = arr[j];
                counter++;
            }

            int one = 0;
            int two = 1;
            bool check = true;
            
            if(size<1) 
            {
                check = false;
            } else if (size >2) {
                for (int j = 1; j <=(size-1) ; j++)
                {
                    int idk = sample[two] - sample[one];
                }
            }
            
            
            
        }
    }

    

    return 0;
}