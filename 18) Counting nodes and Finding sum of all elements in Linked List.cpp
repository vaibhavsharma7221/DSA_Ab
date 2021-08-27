//Counting nodes and Finding sum of all elements in Linked List

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head=NULL;

void createll(int arr[],int n,node *head)
{
    int i;
    node *t,*last;
    
    head->data=arr[0];
    head->next=NULL;
    
    last=head;
    
    for(i=1;i<n;i++)
    {
        node *t=new node();
        t->data=arr[i];
        t->next=NULL;
        
        last->next=t;
        last=t;
    }
}

void display(node *p)
{
    while(p)
    {
        cout<<p->data;
        p=p->next;
    }
}

int cnodelli(node *p)
{
    int c=0;
    
    while(p)
    {
        c=c+1;
        p=p->next;
    }
    return c;
}

int cnodellr(node *p)
{
    if(p==0)
        return (0);
    
    else
        return cnodellr(p->next)+1;
}



int snodelli(node *p)
{
    int s=0;
    
    while(p)
    {
        s=s+p->data;
        p=p->next;
    }
    return s;
}

int snodellr(node *p)
{
    if(p==0)
        return (0);
        
    else
        return snodellr(p->next)+p->data;
}

int main()
{
  
  int arr[]={1,2,3,4,5};
   
  node *head=new node();
  
  createll(arr,5,head);
  
  display(head);
  
  
  cout<<"\n"<<cnodelli(head);
  
  cout<<"\n"<<cnodellr(head);
  
  cout<<"\n"<<snodelli(head);
  
  cout<<"\n"<<snodellr(head);
  
  return 0;
}
