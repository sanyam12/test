#include <iostream>
using namespace std;

int main () {
    // pattern 1

    // int n, m;
    // cin>>n>>m;

    // for(int i=0; i<n; i++)
    // {
    //     for (int j=0; j<m; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // pattern 2

    // int n, m;
    // cin>>n>>m;

    // for(int i=0; i<n; i++)
    // {
    //     if(i==0||i==(n-1))
    //     {
    //         // cout<<i;
    //         for (int j=0; j<m; j++)
    //         {
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     } 
        
    //     else 

    //     {

    //         for (int j=0; j<m; j++)
    //         {

    //             if(j==0||j==(m-1))
    //             {
    //                 cout<<"*";
    //             } 
    //             else 
    //             {
    //                 cout<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    // }
    // cout<<endl;


    //pattern 3

    // int n;
    // cin>>n;

    // for (int i=1; i<=n; i++)
    // {
    //     for (int j=1; j<=(n-i+1); j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // cout<<"\n";

    // pattern 4

    // int n;
    // cin>>n;

    // for (int i=1; i<=n; i++)
    // {
    //     int spaces = n-i;

    //     //prints spaces
    //     for (int j=1; j<=spaces; j++)
    //     {
    //         cout<<" ";
    //     }

    //     //prints *
    //     for (int j=1; j<=(n-spaces); j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // pattern 5

    // int n;
    // int counter=0;
    // cin>>n;
    // for (int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         counter += 1;
    //         cout<<counter<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=(n+1-i); j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}