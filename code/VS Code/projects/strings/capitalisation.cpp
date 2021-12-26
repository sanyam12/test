#include <iostream>
using namespace std;

int main () {

    string s = "kjahjshd";
    transform(s.begin() , s.end() , s.begin() , ::toupper);
    cout<<s<<endl;
    transform(s.begin() , s.end() , s[5], ::toupper);
    return 0;
}