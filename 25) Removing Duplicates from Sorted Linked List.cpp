//Removing Duplicates from Sorted Linked List

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

void display()
{
    node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}

void rduplicatel()
{
    node *s=head,*f=head->next;
    
    while(f)
    {
        if(s->data!=f->data)
        {
            s=f;
            f=f->next;
        }
        else
        {
            s->next=f->next;
            delete f;
            f=s->next;
        }
    }
    
}

int main()
{
    int arr[]={1,2,3,3,4,4,4,5};
    
    head=new node();
   
    create(arr,8);
    
    rduplicatel();
    
    display();
    
    return 0;
}
