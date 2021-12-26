#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    int space = n-1;
    int limit = 1;
    

    for (int r = 1; r<=n; r++)
    {
        int output = 1;
        for (int c = 1; c <=space; c++)
        {
            cout<<" ";
        }

        for (int c=1; c <=limit; c++)
        {
            cout<<output<<" ";
            output ++;
        }
        
        cout<<endl;

        space --;
        limit ++;
    }
    

    return 0;
}