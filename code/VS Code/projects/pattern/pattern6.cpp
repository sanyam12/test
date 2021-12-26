#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int fl = 1;
    int bl = 1;
    int space = 2*n - 2;

    for (int r = 1; r <=n; r++)
    {
        for (int i = 1; i <=fl; i++)
        {
            cout<<"*";
        }

        for (int j = 1; j <=space; j++)
        {
            cout<<" ";
        }

        for (int k = 1; k <=bl; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        fl ++;
        bl ++;
        space = space -2;
        
    }
    
    space = 0;
    bl = n;
    fl = n;

    for (int r=1; r<=n; r++) 
    {
        for (int i = 1; i <=fl; i++)
        {
            cout<<"*";
        }

        for (int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        
        for (int k=1; k<=bl; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        fl--;
        bl--;
        space = space + 2;

    }
    
    return 0;
}