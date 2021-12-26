#include <iostream>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    // int savings;
    // cin>>savings;

    // if(savings>5000) {
    //     cout<<"Neha\n";
    //     if(savings>10000) {
    //         cout<<"Roadtrip\n";
    //     } else {
    //         cout<<"Restraunt\n";
    //     }
    // } 
    
    // else if (savings>2000) {
    //     cout<<"Rashmi\n";
    // }
    //  else {
    //     cout<<"Friends\n";
    // }

    int a,b,c;
    cin>>a>>b>>c;
    if (a>b) {
        if (a>c) {
            cout<<a<<endl;
        } else {
            cout<<c<<endl;
        }

    } else {
        if (b>c) {
            cout<<b<<endl;
        } else cout<<c<<endl;

    }


    return 0;
}