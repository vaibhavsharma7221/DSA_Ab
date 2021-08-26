//Recursive Display of a Linked List

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head=NULL;

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

void displayRll(node *ptr)
{
    if(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        displayRll(ptr->next);
    }
}

void displayllRO(node *ptr)
{
    if(ptr!=NULL)
    {
        displayllRO(ptr->next);
        cout<<ptr->data<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    
    node *head=new node();
    
    createll(arr,5,head);
    
    displayRll(head);
    
    cout<<"\n";
    
    displayllRO(head);//to dispay linked list in reverse order
    
    return 0;
}
