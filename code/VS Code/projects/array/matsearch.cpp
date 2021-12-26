#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int k;
    cin>>k;

    bool found = false;

    int r=0, c=(m-1);
    while(r<=(n-1) && c>=0) {
        if(mat[r][c]==k) {
            found = true;
            cout<<found<<endl;
            break;
        } else if (mat[r][c]<k) {
            r++;
        } else {
            c--;
        }
    }

    if(!found) {
        cout<<found<<endl;
    }

    return 0;
}