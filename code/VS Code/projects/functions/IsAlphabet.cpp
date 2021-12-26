#include <iostream>
using namespace std;

void IsAlphabet(char input) {
    int check = int (input);
    if ((65<=check&& check<=95) || (97<=check&&check<=122) )
    {
        cout<<"It is an Alphabet.\n";
    } else {
        cout<<"It is not an Alphabet.\n";
    }
    
    return;
}

int main () {

    char input;
    cin>>input;

    IsAlphabet(input);

    cout<<int(input)<<endl;

    return 0;
}