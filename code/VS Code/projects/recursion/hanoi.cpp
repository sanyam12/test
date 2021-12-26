#include <iostream>
using namespace std;

void hanoi (int n, char src, char dest, char helper)
{
    if(n==0)
    {
        return;
    }
    hanoi(n-1,src,helper,dest);
    cout<<"Move one block from "<<src<<" to "<<dest<<endl;
    hanoi(n-1,helper,dest,src);
    // cout<<"Move one block from "<<helper<<"to"<<dest;
 
}

int main ()
{
    hanoi(2,'A','C','B');
    return 0;
}