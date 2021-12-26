#include <iostream>
using namespace std;

int main () {

    int money;
    cin>>money;

    for (int date = 0; date <=30 && money>1000 ; date++)
    {
        if (date%2==0)
        {
            continue;
        }
        
        {
            cout<<"You can go out today, that is "<<date<<" and you have "<<money<<"left\n";
            money = money - 1000;
        }
        
    }
    



    return 0;
}