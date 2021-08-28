//Maximum element of a linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*head=NULL;

void createll(int arr[],int n,node* head)
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

int maxlli(node *ptr)
{
    int m=INT_MIN;
    
    while(ptr)
    {
        if(m<ptr->data)
            m=ptr->data;
            
        ptr=ptr->next;    
    }
    return m;
}

int maxllr(node *ptr)
{
    int m;
    
      if(ptr==NULL)
            return INT_MIN;
        
      else
       {
           m=maxllr(ptr->next);
           
           if(m>ptr->data)
                return m;
                
            else
                return ptr->data;
       }
}

int maxllrt(node *ptr)
{
    int m;
    
    if(ptr==NULL)
        return INT_MIN;
    
    else
    {
        m=maxllrt(ptr->next);
            return m>ptr->data?m:ptr->data;
    }
}

int main()
{
    int arr[]={14,2,7,4,5};
    
    node *head=new node();
    
    createll(arr,5,head);
    
    cout<<maxlli(head);//iteratively
    
    cout<<"\n"<<maxllr(head);//recursively
    
    cout<<"\n"<<maxllrt(head);//recursively using ternary
    
    return 0;
}
