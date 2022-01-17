#include<bits/stdc++.h>
using namespace std;

struct node
{
    node *lchild;
    int data;
    node *rchild;
    
    node(int val)
    {
        val=data;
        lchild=rchild=NULL;
    }
};

int leaf(node *t)
{
    if(t==NULL)
    return 0;
    
    else
    {
        if(t->lchild==NULL && t->rchild==NULL)
        return(leaf(t->lchild)+leaf(t->rchild)+1);
        
        else
        return(leaf(t->lchild)+leaf(t->rchild));
    }
}

int deg2(node *t)
{
    if(t==NULL)
    return 0;
    
    else
    {
        if(t->lchild!=NULL && t->rchild!=NULL)
        return(deg2(t->lchild)+deg2(t->rchild)+1);
        
        else
        return(deg2(t->lchild)+deg2(t->rchild));
    }
}

int deg12(node *t)
{
    if(t==NULL)
    return 0;
    
    else
    {
        if(t->lchild!=NULL || t->rchild!=NULL)
        return(deg12(t->lchild)+deg12(t->rchild)+1);
        
        else
        return(deg12(t->lchild)+deg12(t->rchild));
    }
    
}

int deg1(node *t)
{
    if(t==NULL)
    return 0;
    
    else
    {
        if(t->lchild!=NULL^t->rchild!=NULL)
        return(deg1(t->lchild)+deg1(t->rchild)+1);
        
        else
        return(deg1(t->lchild)+deg1(t->rchild));
    }
}


int main()
{
    node *root=new node(1);
    root->lchild=new node(2);
    root->rchild=new node(3);
    root->lchild->lchild=new node(4);
    
    cout<<"leaf nodes :"<<leaf(root);
    
    cout<<"\ndegree(2) nodes :"<<deg2(root);
    
    cout<<"\ndegree(1)+ degree(2) nodes :"<<deg12(root);
    
    cout<<"\ndegree(1) nodes :"<<deg2(root);
    
    return 0;
}
