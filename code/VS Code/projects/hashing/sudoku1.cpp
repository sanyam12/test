#include <bits/stdc++.h>
using namespace std;

void helper(int r, int c, vector<vector<int>>&a, map<pair<int,int>, map<int,int>>&mp, vector<map<int,int>>& row, vector<map<int,int>>& col)
{
    if(r==9)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }

    if(c==9)
    {
        //cout<<r<<endl;
        helper(r+1,0,a,mp,row,col);
        return;
    }

    if(a[r][c]!=0)
    {
        helper(r,c+1,a,mp,row,col);
        return;
    }

    cout<<r<<" "<<c<<endl;
    for(int i=1;i<=9;i++)
    {
        int grow = r/3, gcol = c/3;
        if(!mp[make_pair(grow,gcol)][i] && !row[r][i] && !col[c][i])
        {
            mp[make_pair(grow,gcol)][i] =1;
            row[r][i] = 1;
            col[c][i] = 1;
            a[r][c] = i;
            
            //cout<<c<<endl;
            helper(r, c+1,a,mp,row,col);
        
            mp[make_pair(grow,gcol)][i] =0;
            row[r][i] = 0;
            col[c][i] = 0;
            a[r][c] = 0;
        }
    }

}

void solveSudoku(vector<vector<int>> &a)
{
    map<pair<int,int>, map<int,int>> mp;
    vector<map<int,int>> row(9);
    vector<map<int,int>> col(9);

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            mp[make_pair(i/3,j/3)][a[i][j]] = 1;
            row[i][a[i][j]] = 1;
            col[i][a[i][j]] = 1;
        }
    }

    helper(0,0,a,mp,row,col);
}

int main ()
{
    // vector<vector<int>> arr = 
    // {
    //     {5,3,0,0,7,0,0,0,0},
    //     {6,0,0,1,9,5,0,0,0},
    //     {0,9,8,0,0,0,0,6,0},
    //     {8,0,0,0,6,0,0,0,3},
    //     {4,0,0,8,0,3,0,0,1},
    //     {7,0,0,0,2,0,0,0,6},
    //     {0,6,0,0,0,0,2,8,0},
    //     {0,0,0,4,1,9,0,0,5},
    //     {0,0,0,0,8,0,0,7,9}
    // };

    vector<vector<int>> arr = 
    {
         { 3, 1, 6, 5, 7, 8, 4, 9, 2 },
         { 5, 2, 9, 1, 3, 4, 7, 6, 8 },
         { 4, 8, 7, 6, 2, 9, 5, 3, 1 },
         { 2, 6, 3, 0, 1, 5, 9, 8, 7 },
         { 9, 7, 4, 8, 6, 0, 1, 2, 5 },
         { 8, 5, 1, 7, 9, 2, 6, 4, 3 },
         { 1, 3, 8, 0, 4, 7, 2, 0, 6 },
         { 6, 9, 2, 3, 5, 1, 8, 7, 4 },
         { 7, 4, 5, 0, 8, 6, 3, 1, 0 }
    };

    solveSudoku(arr);
    return 0;
}