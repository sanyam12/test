#include <iostream>
using namespace std;

#define size 15
#define prime 11

class doubleHash
{
    int* hashtable;
    int currsize;

    int hash1(int key)
    {
        return (key%size);
    }

    int hash2(int key)
    {
        int ans = prime - (key%prime);
        return ans;
    }

public:
    bool isFull()
    {
        if(currsize==size-1)
        {
            return true;
        }
        return false;
    }

    doubleHash()
    {
        hashtable = new int(size);
        currsize = 0;

        for(int i=0;i<size;i++)
        {
            hashtable[i] = -1;
        }
    }

    void insert(int val)
    {
        if(isFull())
        {
            return;
        } else
        {
            int index = hash1(val);
            int hashsec = hash2(val);
            while (hashtable[index]!=-1)
            {
                index += hashsec;
            }
            
            hashtable[index] = val;
            currsize++;
        }
    }

    int* search(int val)
    {
        int index = hash1(val);
        int hashsec = hash2(val);

        while (hashtable[index]==val && index<size)
        {
            index += hashsec;
        }
        
        int* ans = &index;
        return ans;
    }

    void del(int val)
    {

    }
};

int main ()
{
    doubleHash hashh;
    hashh.insert(0);
    cout<<*(hashh.search(0))<<endl;
    return 0;
}