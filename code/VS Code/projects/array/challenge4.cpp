#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    int v[n];
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int max =0;
    int i =0;
    bool cd1 = false;
    bool cd2 = false;
    while(i<=n)
    {
        if(max<v[i]) {
            cd1 = true;
        } 

        if(i==(n-1) || v[i]>v[i+1]) {
            cd2 = true;
        }

        if (cd1==true && cd2==true) {
            cout<<i+1<<endl;
        }
        
        if(max<v[i]) {
            max = v[i];
        }
        cd1=false;
        cd2=false;
        i++;
    }
    cout<<endl;
    

    return 0;
}