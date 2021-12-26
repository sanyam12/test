#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // vector<int>::iterator ite;
    // for(ite = v.begin(); ite!=v.end(); ite++)
    // {
    //     cout<<*ite<<endl;
    // }

    vector<int> v2 (3, 50);

    vector<int>::iterator it;
    
    return 0;
}