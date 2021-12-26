#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int limit=n;
    int output = 1;

    for (int r=1; r<=n; r++)
    {
        for (int c = 1; c <=limit; c++)
        {
            cout<<output<<" ";
            output++;
        }
        cout<<endl;
        output =1;
        limit--;
    }

    return 0;
}