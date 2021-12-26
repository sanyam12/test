#include <iostream>
using namespace std;

int main () {
    int rows;
    int column;

    cin>>rows>>column;

    for (int i = 1; i <= rows; i++)
    {
       for (int j=1; j<=column; j++) {
        cout<<"*";
        }    
        cout<<endl; 
    }

    return 0;
}