#include <iostream>
using namespace std;

class student {
    string name;
    public:
    int age;
    bool gender;

    student()
    {
        cout<<"This is the default constructor.\n";
    }//default constructor with no parameters passed to it.
    student (string s, int a, bool g)
    {
        name = s;
        age =a;
        gender = g;
        //cout<<"This is parameterised\n";
    }//paramerterised constructor that is gets something passed to it whenever gets called.
    student (student &a)
    {
        name = a.name;
        age = a.age;
        gender = a.gender;
        //cout<<"This is copied\n";
    }
    ~student()
    {
        cout<<"Distructor called.\n";
    }

    void setName(string s)
    {
        name = s;
    }
    
    void getName()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        
    }
    void PrintInfo()
    {
        cout<<"Name: - ";
        cout<<name<<endl;
        cout<<"Age: - ";
        cout<<age<<endl;
        cout<<"Gender: - ";
        cout<<gender<<endl;
    }

    bool operator == (student &a)
    {
        if(name == a.name && age ==a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main ()
{
    // student arr[3];
    // for(int i=0; i<3; i++)
    // {
    //     cout<<"Name: - ";
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age: - ";
    //     cin>>arr[i].age;
    //     cout<<"Gender: - ";
    //     cin>>arr[i].gender;
    // }
    // cout<<endl;

    // for(int i=0; i<3;i++)
    // {
    //     arr[i].PrintInfo();
    // }
    student b("sanyam",17,0);
    student c =b;
    student a("sanyam",17,0);
    if(b==a)
    {
        cout<<"same\n";
    }else
    {
        cout<<"not same\n";
    }
    return 0;
}