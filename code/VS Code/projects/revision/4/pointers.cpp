#include <iostream>
using namespace std;
void swap (int* ap, int* bp)
{
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
    return;
}

int main () {
    int a = 10;
    int b = 20;

    int* ap = &a;
    int* bp = &b;

    cout<<a<<" "<<b<<endl;
    swap(ap, bp);
    cout<<a<<" "<<b<<endl;

    return 0;
}