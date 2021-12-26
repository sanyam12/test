#include <iostream>
#include <vector>
using namespace std;

int myCompare (pair <int, int> p1, pair <int, int> p2)
{
    return p1.first<p2.first;
}

int main ()
{
    int arr[] = {10,16,7,14,5,3,12,9};
    vector< pair<int,int> > v;

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        v.push_back( make_pair(arr[i],i) );
    }
    
    sort(v.begin(), v.end(), myCompare);    //provides sorted array
    
    for(int i=0; i<v.size(); i++)   //giving them number starting from 0 at 0th position...
    {
        v[i].first=i;
    }

    for(int i=0; i<v.size(); i++)
    {
        arr[v[i].second]=v[i].first;
    }

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}