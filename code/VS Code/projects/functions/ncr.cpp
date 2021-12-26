#include <iostream>
using namespace std;
int fact(int num) {
    int product =1;
    for (int i =2; i<=num; i++) {
        product *= i;
    }
    return product;
}

int main () {

    int n,r;
    cin>>n>>r;

    int answer = fact(n) / (fact(n-r) * fact(r));
    cout<<answer<<endl;
    return 0;
}