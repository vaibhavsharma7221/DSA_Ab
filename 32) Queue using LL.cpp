#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*front=NULL,*rear=NULL;



void enqueue(int x)
{
    node *t=new node();
    
    if(t==NULL)
        cout<<"queue is full";
        
    else
    {
        t->data=x;
        t->next=NULL;
        
        if(front==NULL)
            front=rear=t;
        
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue()
{
    int x=-1;
    
    node *t;
    
    if(front==NULL)
        cout<<"Queue is empty";
    
    else
    {
        t=front;
        front=front->next;
        x=t->data;
        free(t);
    }
    return x;
}

void display()
{
    node *t=front;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<"\n";
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    
    display();
    
    cout<<dequeue()<<"\n";
    cout<<dequeue()<<"\n";
    cout<<dequeue()<<"\n";
    
    display();
    
    return 0;
}
