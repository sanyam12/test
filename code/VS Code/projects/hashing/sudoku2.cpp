#include <bits/stdc++.h>
using namespace std;
map<pair<int,int>, map<int,int>> mp;
vector<map<int,int>> row(9);
vector<map<int,int>> col(9);
void printer(vector<vector<int>> &a)
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
}

bool isSafe(int r, int c, vector<vector<int>>&a, int i)
{
    return (!mp[{r/3,c/3}][i] && !row[r][i] && !col[c][i]);
}

bool helper(int r, int c, vector<vector<int>>&a)
{
    if(r==9)
    {
        printer(a);
        return true;
    }

    if(c==9)
    {
        return helper(r+1,0,a);
    }

    if(a[r][c]!=0)
    {
        //cout<<c<<" ";
        return helper(r,c+1,a);
    }

    for(int i=1;i<=9;i++)
    {
        if(isSafe(r,c,a,i))
        {
            mp[{r/3,c/3}][i]=1;
            row[r][i] = 1;
            col[c][i] = 1;
            a[r][c] = i;
            //cout<<c<<" ";
            if(helper(r,c+1,a))
            {
                return true;
            }
        }
        
        mp[{r/3,c/3}][i]=0;
        row[r][i] = 0;
        col[c][i] = 0;
        a[r][c] = 0;
    }
    return false;
}

void solve(vector<vector<int>> a)
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            mp[{i/3,j/3}][a[i][j]] = 1;
            row[i][a[i][j]] = 1;
            col[i][a[i][j]] = 1;
        }
    }

    helper(0,0,a);
}

int main ()
{
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

    solve(arr);
    return 0;
}