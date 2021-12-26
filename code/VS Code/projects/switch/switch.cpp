#include <iostream>
using namespace std;

int main () {
    // char button;
    // cout<<"Please click a button: ";
    // cin>>button;

    // // if(button == 'a') {
    // //     cout<<"Hello.\n";
    // // } else if(button == 'b') {
    // //     cout<<"Namaste.\n";
    // // } else if(button == 'c') {
    // //     cout<<"Hola.\n";
    // // } else if(button == 'd') {
    // //     cout<<"Salut.\n";
    // // } else if(button == 'e') {
    // //     cout<<"Ciao.\n";
    // // } else {
    // //     cout<<"I am still learning more.\n";
    // // }

    // switch (button)
    // {
    // case 'a':
    //     cout<<"Hello.\n";
    //     break;
    // case 'b':
    //     cout<<"Namaste.\n";
    //     break;
    // case 'c':
    //     cout<<"Hola.\n";
    //     break;
    // case 'd':
    //     cout<<"Saluto.\n";
    //     break;
    // case 'e':
    //     cout<<"Ciao.\n";
    //     break;
    
    // default:
    //     cout<<"I am still learning more."; 
    //     break;
    // }

    char button;
    cin >> button;

    if(button == 'a') {
        cout<<"hello.\n";
    } else if (button == 'b') {
        cout<<"hola.\n";
    } else if (button == 'c') {
        cout<<"namaste.\n";
    } else if (button == 'd') {
        cout<<"ciao.\n";
    } else if (button == 'e') {
        cout<<"idk.\n";
    }
    return 0;
}