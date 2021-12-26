#include <iostream>
using namespace std;

// void swap (int *ap, int *bp) {
//     int temp = *ap;
//     *ap = *bp;
//     *bp = temp;
//     return;
// }
void increment (int *i) {
    (*i)++;
    return;
}
int main () {

    // int a =2;
    // int b= 4;

    // cout<<"old values are "<<a<<" "<<b<<endl;
    // swap(&a , &b);
    // cout<<"new values are "<<a<<" "<<b<<endl;
    int i=2;
    increment(&i);
    cout<<i<<endl;

    return 0;
}