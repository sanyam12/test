#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

bool identical(node* root1, node* root2)
{
    if(root1 ==NULL && root2 ==NULL)
    {
        return true;
    } else if( (root1!=NULL && root2 ==NULL) || (root1==NULL && root2!=NULL))
    {
        return false;
    } else
    {
        bool a = false;
        if(root1->data==root2->data)
        {
            a = true;
        }
        int b = false;
        if(identical(root1->left,root2->left))
        {
            b = true;
        }

        int c = false;
        if(identical(root1->right,root2->right))
        {
            c = true;
        }

        if(a&&b&&c)
        {
            return true;
        } else
        {
            return false;
        }
    }
}

int main ()
{
    node* root1 = new node(1);
    root1->right = new node(3);
    root1->right->left = new node(2);
    root1->right->right = new node(5);

    node* root2 = new node(1);
    root2->right = new node(3);
    root2->right->left = new node(2);
    root2->right->right = new node(5);


    if(identical(root1,root2))
    {
        cout<<"Identical.\n";
    } else
    {
        cout<<"Not Identical.\n";
    }
    return 0;
}