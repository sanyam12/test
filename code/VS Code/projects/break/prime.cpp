#include <iostream>
using namespace std;

int main () {
    int number;
    cin>>number;

    int result;
    for (int i = 2; i < number; i++) {
        if (number%i==0) {
            result = 0;
            break;
        } 
    }

    if (result==0) {
        cout<<"Not Prime.\n";
    } else {
        cout<<"Prime.\n";
    }
    

    return 0;
}