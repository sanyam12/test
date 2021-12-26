#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int factorial=1;
    for (int i=0; i< n; i++)
    {
        int temp = n-i;
        factorial = factorial * temp;
    }
    cout<<factorial;
    return 0;
}