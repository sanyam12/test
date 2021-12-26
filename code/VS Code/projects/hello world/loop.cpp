#include <iostream>
using namespace std;

int main () {
    int row,col;
    cin>>row>>col;

    for (int i=1; i<=row; i++)
    {
        if(i==1||i==row)
        {
            //saare * print
            for(int j=1; j<=col; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        } else {

            //gap print

            for(int j=1; j<=col; j++)
            {
                if(j==1||j==col)
                {
                    cout<<"*";
                } else {
                    cout<<" ";
                }
            }

            cout<<endl;
        }

    }

    return 0;
}