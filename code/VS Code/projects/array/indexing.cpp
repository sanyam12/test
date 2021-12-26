#include <iostream>
using namespace std;

int main () {

    int n;
    cout<<"array size: ";
    cin>>n;

    int key;
    cout<<"key: ";
    cin>>key;

    int array[n];
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    bool found = false;
    for(int i=0; i<n; i++) {
        if(array[i]==key) {
            cout<<i<<endl;
            found = true;
            break;
        }
    }

    if(found == false) {
        cout<<"-1\n";
    }

    return 0;
}