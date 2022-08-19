#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *left;
    int data;
    node *right;
}*root=NULL;


node* insert(node *p,int val)
{
    if(p==NULL)
    {
        node* t =new node();
        t->data=val;
        t->left=t->right=NULL;
        return t;
    }
    
    if(val<p->data)
        p->left=insert(p->left,val);
    
    else if(val>p->data)
        p->right=insert(p->right,val);
        
    return p;    
}

void inorder(node* p)
{
    if(p==NULL)
    return;
    
    inorder(p->left);
    cout<<p->data<<" ";
    inorder(p->right);
}

int height(node *p)
{
    if(p==NULL) return 0;

    return max(height(p->left),height(p->right))+1;
}

node* inpre(node* p)
{
    while(p && p->right!=NULL)
        p=p->right;
        
    return p;    
}

node* insucc(node* p)
{
    while(p && p->left!=NULL)
        p=p->left;
        
    return p;    
}


// delete fxn
node* rdelete(node *p,int key)
{
    node* q;
    
    if(p==NULL)
        return NULL;
    
    if(p->left==NULL && p->right==NULL)
    {
        if(p==root)
            root==NULL;
        
        free(p);
        return NULL;
    }
    
    if(key < p->data)
        p->left = rdelete(p->left,key);
        
    else if(key > p->data)
        p->right = rdelete(p->right,key);
        
     else
    {
        if(height(p->left) > height(p->right))
        {
            q=inpre(p->left);
            p->data = q->data;
            p->left = rdelete(p->left,q->data);
        }
        
        else
        {
            q=insucc(p->right);
            p->data=q->data;
            p->right=rdelete(p->right,q->data);
        }
    }
    return p;
}

int main()
{
  root=insert(root,10);
  insert(root,90);
  insert(root,20); 
  insert(root,80);
  insert(root,30);
  insert(root,70);
  inorder(root);
  
  rdelete(root,10);
  
  cout<<"\n";
  inorder(root);
  
  return 0;
}
