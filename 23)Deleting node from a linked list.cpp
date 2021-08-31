//Deleting node from a linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

};
node *head=NULL;

void create(int arr[],int n)
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

void deleten(int n)
{
    node *p,*f;
    int x;
    
    if(n==1)
    {
        p=head;
        x=p->data;
        head=head->next;
        delete p;
    }
    
    else
    {
        f=head;
        for(int i=0;i<n-1;i++)
        {
            p=f;
            f=f->next;
        }
        x=f->data;
        p->next=f->next;
        delete f;
        
    }
}


void display()
{
    node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}


int main()
{
    int arr[]={10,20,30,40,50};
    
    head=new node();
   
    create(arr,5);
    
    int n;
    cin>>n;
    
    deleten(n);
    
    display();
    
    return 0;
}
