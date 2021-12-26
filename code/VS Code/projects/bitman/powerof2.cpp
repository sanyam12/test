#include <iostream>
using namespace std;

int GetBit(int n, int i)
{
    if( (n & (1<<i)) ==0 )
    {
        return 0;
    } else {
        return 1;
    }
}

void check (int n)
{
    if(n<1)
    {
        cout<<"this is not valid, positive numbers only.\n";
        return;
    }

    bool oneFound = false;
    int counter = 0;
    bool check = false;

    for(int i=0; i<32 ; i++)
    {
        if( (GetBit(n , i) == 1) && (oneFound == true) )
        {
            cout<<"number was not a power of 2.\n";
            check = true;
            break;
        }
        
        if((GetBit(n , i) == 1) && (oneFound==false) )
        {
            oneFound = true;
        }

    }

    if(!check)
    {
        cout<<"number is a power of 2.\n";
    }

    return;
}

int main () 
{
    int n;
    cin>>n;

    check(n);

    return 0;
}