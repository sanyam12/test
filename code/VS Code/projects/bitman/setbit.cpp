#include <iostream>
using namespace std;

int SetBit (int n, int position) {
    int output = ( (n | (1<<position) ) );

    return output;
}

int main () {
    int n;
    cin>>n;

    int position;
    cin>>position;

    cout<<SetBit(n , position)<<endl;

    return 0;
}