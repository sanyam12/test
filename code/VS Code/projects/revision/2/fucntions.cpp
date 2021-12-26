#include <iostream>
using namespace std;
int factorial(int n1) {
    int ans=1;
    for (int i=0; i< n1; i++)
    {
        int temp = n1-i;
        ans = ans * temp;
    }
    cout<<ans<<" ";
    return ans;
}

int main () {
    int m,n;
    cin>>m>>n;

    factorial(m);
    factorial(n);
    cout<<endl;

    return 0;
}