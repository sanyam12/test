#include <iostream>
using namespace std;

bool isSafe(int** arr, int n, int row, int column)
{
    //bool check = false;
    for(int i=0; i<row; i++)
    {
        if(arr[i][column] == 1)
        {
            //check = true;
            return false;
        }
    }
    //above left diagonal
    for(int i=1; i<(column); i++)
    {
        if(arr[row-i][column-i]==1)
        {
            //check =true;
            return false;
        }
    }
    //above right diagonal
    for(int i=0; i<(n-column); i++)
    {
        if(arr[row-i][column+i]==1)
        {
            return false;
        }
    }

    return true;
}

bool nqueen(int** arr, int n, int row, int column)
{
    if(row ==n-1)
    {
        return true;
    }
    for(int i=row; i<n; i++)
    {
        bool success = false;
        for(int j=0; j<n; j++)
        {
            if(isSafe(arr,n,i,j))
            {
                arr[i][j]=1;
                success = true;
                if(nqueen(arr,n,row+1,column))
                {
                    return true;
                }
                arr[i][j]=0;
                success = false;
            }
        }
        if(!success)
        {
            return false;
        }
    }
    return 0;
}

int main ()
{
    int n;
    cin>>n;

    //making of arr.
    int** arr = new int*[n];
    for(int i=0; i<n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;
        }
    }

    if(nqueen(arr,n,0,0))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j];
            }
        }
        cout<<endl;
    } 
    else 
    {
        cout<<"error\n";
    }
    
    
    // //making of sol arr
    // int** solarr = new int*[n];
    // for(int i=0; i<n; i++)
    // {
    //     solarr[i] = new int[n];
    // }
    return 0;
}