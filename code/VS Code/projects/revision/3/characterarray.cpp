#include <iostream>
using namespace std;

int main () 
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = true;
    cout<<"true"<<endl;
    for(int i=0 ; i<n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            //cout<<"it's me lol\n";
            check = 0;
            break;
        }
    }

    if(check == true)
    {
        cout<<"is a palindrom.\n";
    } else {
        cout<<"not a palindrom.\n";
    }
    return 0;
}