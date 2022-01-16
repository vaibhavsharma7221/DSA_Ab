// to count nodes of a binary tree

#include<bits/stdc++.h>
using namespace std;


struct node
{
    node *left;
    int data;
    node *right;
    
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

int count(node *t)
{
    int x,y;
    if(t!=NULL)
    {
        x=count(t->left);
        y=count(t->right);
        
        return x+y+1;
    }
    return 0;
}

int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(6);
    
    cout<<"No. of nodes in tree :"<<count(root);
}

