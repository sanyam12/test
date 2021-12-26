#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    int space = n-1;
    //int bl=1;

    for(int r=1; r<=n; r++) {
        for (int c = 1; c <=space; c++)
        {
            cout<<" ";
        }

        for (int c=1; c<=r; c++) {
            cout<<"*";
        }

        for(int c=1; c<=r-1; c++) {
            cout<<"*";
        }

        cout<<endl;
        //bl ++;
        space--;
        
    }

    space = 0;

    for (int r=1; r<=n; r++) {
        for (int c=1; c<=space; c++) {
            cout<<" ";
        }

        for (int c=1; c<=n-r; c++) {
            cout<<"*";
        }

        for (int c=1; c<=n-r; c++) {
            cout<<"*";
        }

        cout<<endl;
        space ++;
    }

    return 0;
}