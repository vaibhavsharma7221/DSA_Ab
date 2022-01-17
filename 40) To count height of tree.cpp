//to count height of tree

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

int height(node *t)
{
    int x,y;
    
  if(t!=NULL)
  {
        x=height(t->lchild);
        y=height(t->rchild);
    
    if(x>y)
    return x+1;
    
    else
    return y+1;
  }
    return 0;
}


int main()
{
    node *root=new node(1);
    root->lchild=new node(2);
    root->rchild=new node(3);
    root->lchild->lchild=new node(4);
    
    cout<<"height of the tree :"<<height(root);
    
    return 0;
}
