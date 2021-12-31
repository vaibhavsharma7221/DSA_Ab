#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *left;
    int data;
    node *right;
    
    node(int val)
    {
        left=NULL;
        data=val;
        right=NULL;
    }
};

int main()
{
    node *root=new node(1);
    
    root->left =new node(2);
    root->right =new node(3);
    
    root->left->left=new node(4);
   
   return 0; 
}
