#include <iostream>
using namespace std;

int main () {

    int b;
    cin>>b;

    //initialisation
    int arr[b+1];
    for(int i=0; i<=b; i++)
    {
        arr[i]=i;
    }

    //sieve of eratosthenes
    for(int i=2; i<=b; i++)
    {
        int counter = i*i;  //counter = 4
        int multiplier = i; //multiplier = 2;
        if(arr[i]!='\0')
        {
            while(counter <=b)
            {
                arr[counter] = '\0';
                multiplier++;
                counter = i * multiplier;
            }
        }
        
    }

    //print
    for(int i=2; i<=b;i++)
    {
        if(arr[i]!='\0')
        {
            cout<<arr[i]<<" ";
        }
    }

    cout<<endl;

    return 0;
}