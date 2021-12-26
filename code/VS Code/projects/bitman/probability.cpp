#include <iostream>
using namespace std;

int main () {

    int ones = 0 , zeroes = 0;

    for(int i=0; i<2000000000; i++) {
        int out = rand(0,2);
        if(out==0)
        {
            zeroes++;
        } else if(out==1) {
            ones++;
        }
    }

    cout<<zeroes<<" "<<ones<<endl;
    return 0;
}