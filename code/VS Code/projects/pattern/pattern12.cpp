#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;
    int space = n-1;
    int limit =1;
    for (int r=1; r<=n; r++) {
        for (int c=1; c<=space; c++) {
            cout<<" ";
        }
        
        for (int c=1; c<=limit; c++) {
            cout<<"*";
        }

        cout<<endl;
        space--;
        limit= limit +2;
    }

    space=0;
    limit=2*n -1;
    for (int r=1; r<=n; r++) {
        for(int c=1; c<=space; c++) {
            cout<<" ";
        }

        for(int c=1; c<=limit; c++) {
            cout<<"*";
        }

        cout<<endl;
        limit = limit - 2;
        space ++;
    }
    return 0;
}