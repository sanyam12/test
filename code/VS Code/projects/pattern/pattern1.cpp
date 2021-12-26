#include <iostream>
using namespace std;

int main () {
    int row, column;
    cin>>row>>column;

    for (int i=1; i<=row; i++) {
        if (i== 1) {
            for (int j=1; j<=column; j++) {
                cout<<"*";
            }
        } else if (i== row) {
            for (int j=1; j<=column; j++) {
                cout<<"*";
            }
        } else {
            for (int j=1; j<= column;j++){
                if (j== 1) {
                    cout<<"*";
                } else if (j== column) {
                    cout<<"*";
                } else {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}