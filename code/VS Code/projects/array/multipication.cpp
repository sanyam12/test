#include <iostream>
using namespace std;

// void multiply (int arr1[][], int arr2[][], int n1, int n2, int m1, int m2) {

//     return;
// }

int main()
{

    int n1, m1, n2, m2;
    cin >> n1 >> m1 >> n2 >> m2;

    int arr1[n1][m1], arr2[n2][m2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> arr2[i][j];
        }
    }

    bool flag = false;
    if (m1 == n2)
    {
        flag = true;
    }

    if (flag)
    {
        //function for multiply
        int row = 0;
        int output[n1][m2];
        while (row < n1)
        {
            for (int col = 0; col < m2; col++)
            {
                int sum = 0;

                for (int i = 0; i < m2; i++)
                {
                    sum += (arr1[row][i] * arr2[i][col]);
                }

                output[row][col] = sum;
            }
            row++;
        }

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                cout << output[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "multiplication is not possible.\n";
    }

    return 0;
}