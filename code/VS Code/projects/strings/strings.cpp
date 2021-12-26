#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s1 = "BacDeF";
    int n = s1.length();
    
    //convert to uppercase
    for(int i=0; i<n; i++)
    {
        if(97<=int(s1[i]) && int(s1[i])<=122)
        {
            s1[i] = char(int(s1[i]-32));
        }
    }

    cout<<s1<<endl;

    //convert to lowercase
    for(int i=0; i<n; i++)
    {
        if(65<=int(s1[i]) && int(s1[i])<=90)
        {
            s1[i] = char(int(s1[i]+32));
        }
    }
    cout<<s1<<endl;
    return 0;
}