#include <iostream>
#include <set>
using namespace std;

int main ()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(5);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<*(s.end())<<endl;
    return 0;
}