#include <bits/stdc++.h>
using namespace std;

bool check(string input, int curr)
{
    bool possible = false;
    for(int j=1;j<input.length();j++)
    {
        if(input[j]<curr)
        {
            
                curr = input[j];
                possible = true;
        }
    }

    return possible;
}

vector<string> possibleChanges(vector<string> usernames) {
    vector<string> ans;
    int i=0;
    while (i<usernames.size())
    {
        string currstr = usernames[i];
        int curr = currstr[0];
        
        if(check(currstr,curr))
        {
            ans.push_back("YES");
        } else
        {
            ans.push_back("NO");
        }
    i++;
    }
    return ans;
}

int main ()
{
    vector<string> usernames {"foo", "bar", "baz"};
    vector<string> output= possibleChanges(usernames);

    for(int i=0; i<output.size();i++)
    {
        cout<<output[i]<<endl;
    }
    
    return 0;
}
