//Inserting in a Sorted Linked List

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

void addsortll(int n)
{
    node *fast=head,*slow=NULL;
    
    while(fast && fast->data<n)
    {
        slow=fast;
        fast=fast->next;
    }
    
    node *t=new node();
    t->data=n;
    t->next=slow->next;
    slow->next=t;
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
    
    addsortll(25);
    
    display();
    
    return 0;
}
