#include <iostream>
using namespace std;
int arrsearch (int key, int arr[]) {
    for (int i=0; i<5; i++)
    {
        if(key==arr[i])
        {
            return (i+1);
        }
    }
    return -1;
}

int main () {

    int key;
    cin>>key;

    int arr[5] = {12,18,20,42,8};
    // int pos;

    // for (int i=0; i<5; i++)
    // {
    //     if(key==arr[i])
    //     {
    //         pos = i;
    //     }
    // }
    cout<<arrsearch(key, arr)<<endl;
    return 0;
}