#include <iostream>
using namespace std;

int permutations(int start, int end)
{
    if(start==end) 
    {
        return 0;
    }
    if(start>end)
    {
        return 0;
    }
    
    int count = 0;
    for (int i = 1; i <=6; i++)
    {
        int jump = i;
        
        count+=permutations(i,end);
        return count;
    }
     
}

int main ()
{
    permutations(0,3);
    return 0;
}