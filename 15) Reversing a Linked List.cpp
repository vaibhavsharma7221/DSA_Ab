//Reversing a Linked List

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}

node *head=NULL;

void revlist()
{
    node *p=NULL,*c=head,*n;
    
    if(head==NULL)
        cout<<"list is empty";
        
    else
    {
        while(c!=NULL)
        {
        
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        
        }
        head=p;
    }
}
