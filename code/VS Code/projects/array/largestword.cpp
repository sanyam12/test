#include <iostream>
using namespace std;

void arrMaxFinder (int length[], int n) {
    int max = -1;

    for(int i=0; i<n+1; i++) {
        if(max<length[i]) {
            max = length[i];
        }
    }

    cout<<max<<endl;

    return;
}

int main () {
    //  /* input ki dikat abhi bhi hai idhr */
    char arr[100];
    cin.getline(arr, 99);
    cout<<"Your input was: - "<<arr<<endl;

    int max = -1;
    int s=-1 , l=-1;
    int curr = 0;

    for(int i=0; i<=100; i++) {
        if(arr[i]=='\0') {
            break;
        }
        if(arr[i]!=' ') {
            curr++;
        } else {
            curr=0;
            s = i+1;
        }
        if(max<curr) {
            max = curr;
            l = i;
        }
    }

    cout<<max<<endl;
    for (int i=s; i<=l; i++) {
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}