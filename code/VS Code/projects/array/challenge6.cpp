#include <iostream>
using namespace std;

int main () {

    int n;
    cout<<"n ";
    cin>>n;

    int arr[n];
    cout<<"array ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int S;
    cout<<"S ";
    cin>>S;


    int sum=0;
    int i=0;
    int counter =i;
    int s=0;
    int l=0;
    while (i<n)
    {
        
        sum +=arr[counter];
        if(sum==S) {
            s=i;
            l=counter;
            cout<<s<<" "<<l<<endl;
            break;
        }

        if((counter==(n-1)) || (sum>S)) {
            counter=i+1;
            sum =0;
            i++;
        }

        counter++;
    }
    

    return 0;
}