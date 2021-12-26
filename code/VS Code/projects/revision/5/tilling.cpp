#include <iostream>
using namespace std;

int tilling (int n) {
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    //cout<<"I am returning"<<endl;
    return tilling(n-1) + tilling(n-2);
}

int main () {
    cout<<tilling(10)<<endl;

    return 0;
}