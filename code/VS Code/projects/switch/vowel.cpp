#include <iostream>
using namespace std;

int main () {
    char al;
    cout<<"Provide an alphabet: ";
    cin>>al;

    switch (al)
    {
    case 'a':
        cout<<"Vowel\n";
        break;

    case 'e':
        cout<<"Vowel\n";
        break;
    
    case 'i':
        cout<<"Vowel\n";
        break;

    case 'o':
        cout<<"Vowel\n";
        break;

    case 'u':
        cout<<"Vowel\n";
        break;
    
    default:
        cout<<"Consonant.\n";
        break;
    }

    return 0;
}