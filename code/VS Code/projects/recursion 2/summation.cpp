#include <iostream>
using namespace std;

int summation (int n)
{
    if(n==0)
    {
        return 0;
    }
    int sum =0;
    sum = n+ summation(n-1);
    return sum;

}

int main() 
{
    cout<<summation(10)<<endl;
    return 0;
}