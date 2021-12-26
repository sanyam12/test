#include <bits/stdc++.h>
using namespace std;

bool cus(pair<int, vector<int>> &a,pair<int, vector<int>> &b)
{
    return(a.second[0]<b.second[0]);
}

int main()
{
    map<int, vector<int>> m;
    m[0].push_back(1);
    m[1].push_back(2);

    sort(m.begin(), m.end(), cus);
    return 0;
}