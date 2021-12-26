#include <iostream>
using namespace std;

int GetBit (int n, int position) {
    if( ( n & (1<<position) ) ==0) {
        return 0;
    } else
        return 1;
}

int main() {

    int n;
    cin >> n;
    int position;
    cin >> position;

    if(GetBit(n , position)) {
        cout<<"Bit is 1.";
    } else
        cout<<"Bit is 0.";

    return 0;
}