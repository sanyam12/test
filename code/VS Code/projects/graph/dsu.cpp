#include <bits/stdc++.h>
using namespace std;

map<int,int> parent;
map<int,int> size;
void make(int a)
{
    parent[a] = a;
    size[a] = 1;
}

int find_set(int a)
{
    if(parent[a]==a)
        return a;
    else
        return find_set(parent[a]);
}

void uni(int a, int b)
{
    a = find_set(a);
    b = find_set(b);

    if(a!=b)
    {
        if(size[a]<size[b])
        {
            swap(a,b);
        }
        parent[b]=a;
        size[a]+=size[b];
    }

}

int main()
{
    make(1);
    make(2);

    uni(1,2);

    make(3);
    make(4);
    uni(3,4);
    uni(2,4);
    cout<<find_set(1)<<" "<<find_set(4)<<endl;

    return 0;
}