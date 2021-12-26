#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;
    int space= n-1;
    for (int r = 1; r <=n; r++)
    {
        for (int c = 1; c <=space; c++)
        {
            cout<<" ";
        }

        for (int c = 1; c <=n; c++)
        {
            cout<<"*";
        }
        space--;
        cout<<endl;
        
    }
    

    return 0;
}