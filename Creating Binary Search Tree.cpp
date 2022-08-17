#include<bits/stdc++.h>
using namespace std;

struct node
{
  node *left;
  int data;
  node *right;
} *root = NULL;


void
insert (int val)
{
  node *p, *f = root, *s = NULL;

  if (root == NULL)
    {
      p = new node ();
      p->data = val;
      p->left = p->right = NULL;
      root = p;
      return;
    }

  while (f != NULL)
    {
      s = f;

      if (val < f->data)
	f = f->left;

      else
	f = f->right;
    }

  p = new node ();
  p->data = val;
  p->left = p->right = NULL;

  if (val < s->data)
    s->left = p;

  else
    s->right = p;
}

void
inorder (node * p)
{
  if (p == NULL)
    return;

  inorder (p->left);
  cout << p->data << " ";
  inorder (p->right);
}


node* search (int val)
{
    node * p=root;
    
    while(p!=NULL)
    {
        if(val==p->data)
        return p;
        
        else if(val < p->data)
        p=p->left;
        
        else
        p=p->right;
    }
    
    return NULL;
}


    int main ()
  {
    insert (9);
    insert (15);
    insert (5);
    insert (20);
    insert (16);
    insert (8);
    insert (12);
    insert (3);
    insert (6);

    inorder (root);
    
    node *found = search(20);
    
    if(found!=NULL)
       cout<<"\nelement found :"<< found->data;
       
    else
        cout<<"\nelement not found";
        
    return 0;    
  }
