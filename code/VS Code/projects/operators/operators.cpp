#include <iostream>
using namespace std;

int main () {
    // int n;
    // cin>>n;

    // if (n>10) {
    //     cout<<"more than 10.\n";
    // } else if (n<10) {
    //     cout<<"less than 10.\n";
    // } else (n=10) {
    //     cout<<"equal to 10.\n";
    // }
    
    
    // int k;
    // k = (9==9);
    // cout<<k<<endl;

    int a;
    cin>>a;

    if ((a%2==0) && (a%3==0)) {
        cout<<"divisible by both.\n";
    } else if (a%2==0) {
        cout<<"divisible by 2.\n";
    } else if (a%3==0) {
        cout<<"divisible by 3.\n";
    } else {
        cout<<"divisible by none.\n";
    }
    return 0;
}