#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin>>n;
    int p1[n], p2[n];

    for(int i=0;i<n;i++)
    {
        cin>>p1[i]>>p2[i];
    }

    int score1 = 0, score2 = 0;
    int maxsc = INT_MIN;
    int W = 0;
    for(int i=0;i<n;i++)
    {
        score1+=p1[i];
        score2+=p2[i];

        if(score1-score2>0)
        {
            if(score1-score2>maxsc)
            {
                W = 1;
                maxsc = max((score1-score2),maxsc);
            }
        } else
        {
            if(score2-score1>maxsc)
            {
                W=2;
                maxsc = max((score2-score1), maxsc);
            }
        }
    }

    cout<<W<<" "<<maxsc;
    //cout<<score2<<endl;
    return 0;
}