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


void levelorder(node* t)
{
    cout<<t->data<<" ";
    queue<node*> q;
    q.push(t);
    
    while(!q.empty())
    {
       t=q.front();
       q.pop();
       
       if(t->left)
       {
           cout<<t->left->data<<" ";
           q.push(t->left);
       }
       
       if(t->right)
       {
           cout<<t->right->data<<" ";
           q.push(t->right);
       }
    }
}


int main()
{
    node *root=new node(1);
    root->left=new node(5);
    root->left->left=new node(4);
    root->right=new node(3);
    
    cout<<"Level order Traversal :";
    levelorder(root);
}
