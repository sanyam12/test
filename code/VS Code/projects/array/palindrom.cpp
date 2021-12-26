#include <iostream>
using namespace std;

int main()
{
    //input
    char arr[100];
    cin >> arr;

    //number of character finder.
    int last =-1;
    for(int i=0; i<=100; i++) {
        if(arr[i]=='\0') {
            last = i-1;
            break;
        }
    }

    //check palindrom.
    int i=0;
    bool palindrom = true;
    while(i<last) {
        if(arr[i]!=arr[last]) {
            palindrom = false;
            break;
        }
        i++;
        last--;
    }

    //print
    if(palindrom) {
        cout<<"It is a palindrom.\n";
    } else {
        cout<<"It is not a palindrom.\n";
    }

    return 0;
}