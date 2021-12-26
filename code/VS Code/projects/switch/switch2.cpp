#include <iostream>
using namespace std;

int main () {
    char button;
    cout<<"please input the button. ";
    cin>>button;

    // if(button == 'a') {
    //     cout<<"hello.";
    // } else if(button == 'b') {
    //     cout<<"hola.\n";
    // } else if(button == 'c') {
    //     cout<<"ciao.\n";
    // } else if(button == 'd') {
    //     cout<<"namaste.\n";
    // } else if(button == 'e') {
    //     cout<<"idk.\n";
    // } else if(button == 'f') {
    //     cout<<"I am learning more of these.\n";
    // }

    switch (button)
    {
    case 'a':
        cout<<"hello";
        break;
    
    case 'b':
        cout<<"hola";
        break;

    case 'c':
        cout<<"ciao";
        break;

    case 'd':
        cout<<"namaste";
        break;

    case 'e':
        cout<<"idk.";
        break;
    
    default:
        cout<<"I'm still learning more.";
        break;
    }

    return 0;
}