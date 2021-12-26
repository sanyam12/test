#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adjm(n+1, vector<int>(n+1,0));

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    // cout<<endl<<"adjacency matrix for abv graph is: -\n";
    // for(int i=1; i<n+1;i++)
    // {
    //     for(int j=1;j<n+1; j++)
    //     {
    //         cout<<adjm[i][j]<<" ";
    //         cout<<"("<<i<<","<<j<<") ";
    //     }
    //     cout<<endl;
    // }

    if(adjm[7][3]==1)
    {
        cout<<"there is a edge between 7 ans 3\n";
    }
    return 0;
}