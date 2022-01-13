#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *lchild;
    int data;
    node *rchild;
    
    node(int val)
    {
        data=val;
        lchild=rchild=NULL;
    }
};


void preorder(node *t)
{
    if(t!=NULL)
    {
    cout<<t->data<<" ";
    preorder(t->lchild);
    preorder(t->rchild);
    }
}


void inorder(node *t)
{
    if(t!=NULL)
    {
        inorder(t->lchild);
        cout<<t->data<<" ";
        inorder(t->rchild);
    }
}


void postorder(node *t)
{
    if(t!=NULL)
    {
        postorder(t->lchild);
        postorder(t->rchild);
        cout<<t->data<<" ";
    }
}


int main()
{
    node *root =new node(1);
    root->lchild=new node(2);
    root->rchild=new node(3);
    root->lchild->lchild=new node(4);
    
    cout<<"Preorder Traversal :";
    preorder(root);
    
    cout<<"\ninorder Traversal :";
    inorder(root);
    
    cout<<"\npostorder Traversal :";
    postorder(root);
    
    return 0;
}

