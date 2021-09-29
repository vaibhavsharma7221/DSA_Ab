//Stacks using Linked List

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *top=NULL;


void push(int x)
{
    node *t;
    t=new node();
    
    if(t==NULL)
    cout<<"stack is full\n";
    
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}  

void display()
{
    node *p;
    p=top;
    
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}

int pop()
{
    node *p;
    int x=-1;
    
    if(top==NULL)
        cout<<"stack is empty";
        
    else
    {
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}

int main()
{
    push(10);
    push(20);
    push(30);
    
    display();
    
    cout<<pop()<<"\n";
    
    display();
    
    return 0;
}
