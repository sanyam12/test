#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;
    int space = n-1;

    for (int r=1; r<=n; r++) {
        for (int c=1; c<=space; c++) {
            cout<<" ";
            
        }
        
        int start = r;
        for(int c=1; c<=r; c++) {
            cout<<start;
            start --;
        }
        start = start +2;
        for(int c=1; c<=r-1; c++) {
            cout<<start;
            start ++;
        }

        cout<<endl;
        

        space --;
    }

    return 0;
}