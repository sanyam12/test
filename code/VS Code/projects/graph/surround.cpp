#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> a = {
                                {1,1,1,1},
                                {1,-1,-1,1},
                                {1,1,-1,1},
                                {1,-1,1,1}
                            };

bool fun(int i,int j)
{
    if((-1<i) && (i<4) && (-1<j-1) && (j-1<4))
    {
        if(a[i][j-1]==-1)
        {
            a[i][j] = 1;
            if(!fun(i,j-1))
            {
                a[i][j] = -1;
                return false;
            }
        }
    }else
    {
        return false;
    }
    
    if((-1<i)&&(i<4) && (-1<j+1)&&(j+1<4))
    {
        if(a[i][j+1]==-1)
        {
            a[i][j] = 1;
            
            if(!fun(i,j+1))
            {
                a[i][j] = -1;
                return false;
            }
        }
    } else 
    {
        return false;
    }

    if((-1<i-1)&&(i-1<4) && (-1<j)&&(j<4))
    {
        if(a[i-1][j]==-1)
        {
            a[i][j] = 1;
            if(!fun(i-1,j))
            {
                a[i][j] = -1;
                return false;
            }
        }
    }else
    {
        return false;
    }

    if((-1<i+1)&&(i+1<4) && (-1<j)&&(j<4))
    {
        if(a[i+1][j]==-1)
        {
            a[i][j] = 1;
            if(!fun(i+1,j))
            {
                a[i][j] = -1;
                return false;
            }
        }
    }else
    {
        return false;
    }

    a[i][j] = true;
    return true;
}

int main()
{   
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]==-1)
            {
                fun(i,j);
            }
        }
    }

    int i=0, j=0;
    if(a[i][j-1]==-1)
    {
        cout<<"aksbfkaf\n";
    }
    
    for(auto i:a)
    {
        for(auto j:i)
        {
            if(j==-1)
            {
                cout<<"O ";
            }else if(j==1)
            {
                cout<<"X ";
            }
        }
        cout<<endl;
    }
    return 0;
}