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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j]==k) {
                cout<<i<<" "<<j<<endl;
                found = true;
                break;
            }
        }
    }

    if(!found) {
        cout<< "Not Found.\n";
    }

    return 0;
}