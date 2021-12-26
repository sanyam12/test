#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    int space = (n-1);

    for (int r = 1; r <=n; r++)
    {
        for (int c =1; c <=n; c++)
        {
            if(c<=space) {
                cout<<" ";
            } else {
                cout<<"*";
            }
        }
        cout<<endl;
        space --;
    }
    

    return 0;
}