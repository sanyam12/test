#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    int output;
    int limit =1;
    for (int r=1; r<=n; r++)
    {
        if(r%2==0) {
            output=0;
            for(int c=1; c<=limit; c++)
            {
                cout<<output<<" ";
                if (output==1)
                {
                    output = 0;
                } else {
                    output=1;
                }
            
            }
        }else {
            output=1;
            for(int c=1; c<=limit; c++)
            {
                cout<<output<<" ";
                if (output==1)
                {
                    output = 0;
                } else {
                    output=1;
                }
            
            }
        }

        cout<<endl;
        limit++;  
    }



    return 0;
}