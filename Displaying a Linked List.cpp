//Displaying a Linked List

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

};
node *head=NULL;

void create(int arr[],int n,node *head)
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

void display(node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    
    node *head=new node();
   
    create(arr,5,head);
    
    display(head);
    
    return 0;
}
