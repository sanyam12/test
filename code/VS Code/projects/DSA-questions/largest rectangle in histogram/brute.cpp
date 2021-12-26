#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int a[] = {2,1,5,6,2,3};
    int ans = 0;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
    {
        int minh = INT_MAX;

        for(int j=i;j<n;j++)
        {
            minh = min(a[j],minh);
            int l = j-i+1;
            ans = max(ans, (minh*l));
        }
    }

    cout<<ans<<endl;
    return 0;
}