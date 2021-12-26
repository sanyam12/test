#include <iostream>
using namespace std;

int main () {

    char c;
    cout<<"give me a character: ";
    cin>>c;

    switch (c)
    {
        case 'a' :
            cout<<"vowel\n";
            break;
        
        case 'e' :
            cout<<"vowel\n";
            break;
        
        case 'i' :
            cout<<"vowel\n";
            break;
        case 'o' :
            cout<<"vowel\n";
            break;
        case 'u' :
            cout<<"vowel\n";
            break;
        
        default :
            cout<<"consonant\n";
            break;
    }

    return 0;
}