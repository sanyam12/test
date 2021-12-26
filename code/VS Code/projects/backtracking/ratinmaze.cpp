#include <iostream>
using namespace std;

/*
*/

// this is to confirm if the block is not blocked.
bool isSafe (int** arr, int x, int y, int n)
{
    if(x<=n-1 && y<=n-1 && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}


//and now we make the rat run his ass off
bool RatMaze (int** arr, int x, int y, int n, int** solArr)
{
    if(x==n-1 && y==n-1)
    {
        solArr[x][y] = 1;
        return true;
    }


    if(isSafe (arr, x, y, n))
    {
        solArr[x][y] = 1;
        //if moving right works well
        if(RatMaze(arr,x+1,y,n,solArr))
        {
            return true;
        }

        //if moving down works well
        if(RatMaze(arr,x,y+1,n,solArr))
        {
            return true;
        }

        //if none of them work well, then, we backtrack
        solArr[x][y] = 0;
        return false;
    }
    return false;
}

int main () 
{
    int n;
    cin>>n;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    int** solArr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n;j++)
        {
            solArr[i][j] = 0;
        }
        
    }
    cout<<endl;

    if(RatMaze(arr,0,0,n,solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<solArr[i][j]<<" ";
            }cout<<endl;
        }
    }
    return 0;
}