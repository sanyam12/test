#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    
    int limit = n;

    for (int r = 1; r <=n; r++)
    {
        for (int c = 1; c <=limit; c++)
        {
            cout<<"*";
        }
        limit--;
        cout<<endl;
        
    }
    

    return 0;
}