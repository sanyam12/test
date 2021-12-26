#include <iostream>
using namespace std;

void toh (int n, char src, char dest, char helper)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,src,helper,dest);
    cout<<"move "<<src<<" to "<<dest<<"\n";
    toh(n-1,helper,dest,src);
    return;
}

int main()
{
    toh(3,'A','C','B');
    return 0;
}