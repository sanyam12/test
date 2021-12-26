#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main () {
    string s = "dadfkjhavnaksafdf";
    int arr[123];

    //initialisation of array
    for(int i=0; i<123; i++)
    {
        arr[i] = 0;
    }

    //frequency registratioin
    for(int i=0; i < s.size(); i++)
    {
        arr[ (int) s[i] ]++;
    }

    //finding maximum frequency
    int max = -1;
    for(int i=97; i <= 123; i++)
    {
        if(arr[i]>max)
        {
            max = i;
        }
    }
    
    //outputing the maximum
    cout<<"maximum frequency was "<<arr[max]<<" of the alphabet "<<(char)max<<endl;
    return 0;
}