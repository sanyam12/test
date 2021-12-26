#include <iostream>
using namespace std;

int main () {

    int number;
    cin>>number;
    for ( int counter = 1; counter <= number; counter++)
    {
        if (counter%3==0){
            continue;
        }
        cout<<counter<<endl;
    }
    
    return 0;
}