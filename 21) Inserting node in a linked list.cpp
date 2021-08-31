//Inserting node in a linked list

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head=NULL;

void create(int arr[],int n,node *head)
{
    int i;
    node *t, *last;
    
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

void showll(node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void add(int x,int pos,node *head)
{
    node *p,*t;
    if(pos==0)
    {
        node *t=new node();
        t->data=x;
        t->next=head;
        head=t;
    }
    else if(pos>0)
    {
        int i;
        p=head;
        node *t=new node();
        t->data=x;
        
        for(i=0;i<pos-1&&p;i++)
        {
            p=p->next;
        }
        
        t->next=p->next;
        p->next=t;
    }
    cout<<"\n";
    showll(head);
}



int main()
{
    int arr[]={1,2,3,4,5};
    node *head=new node();
    
    create(arr,5,head);
    
    showll(head);
    
    int x,pos;
    cout<<"\n";
    cin>>x>> pos;
    
    add(x,pos,head);
    
   
    return 0;
}    
