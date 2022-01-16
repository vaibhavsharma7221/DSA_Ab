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


void ipreorder(node *t)
{
    stack<node*> st;
    
    while(t!=NULL || !st.empty())
    {
    if(t!=NULL)
    {
        cout<<t->data<<" ";
        st.push(t);
        t=t->left;
    }
    
    else
    {
        t=st.top();
        st.pop();
        t=t->right;
    }
    }
}


void iinorder(node *t)
{
    stack<node*> st;
    
    while(t!=NULL || !st.empty())
    {
        if(t!=NULL)
        {
            st.push(t);
            t=t->left;
        }
        
        else
        {
            t=st.top();
            
            st.pop();
            
            cout<<t->data<<" ";
            t=t->right;
        }
    }
    
}

int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    
    cout<<"preorder :";
    ipreorder(root);
    
    cout<<"\ninorder :";
    iinorder(root);
    
    return 0;
}
