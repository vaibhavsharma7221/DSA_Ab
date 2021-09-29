#include<iostream>
using namespace std;

class node
{
    public:
    
    int data;
    node *next;
};

class stack
{
    private:
    node *top;
    
    public:
    stack()
    {
        top=NULL;
    }
    
    void push(int x);
    
    int pop();
    
    void display();
};

void stack::push(int x)
{
    node *t=new node();
    
    if(t==NULL)
        cout<<"stack is full\n";
    
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int stack::pop()
{
    int x=-1;
    node *p;
    
    if(top==NULL)
        cout<<"stack is empty\n";
    
    else
    {
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
}

void stack::display()
{
    node *p=top;
    
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}

int main()
{
    stack obj1;
    obj1.push(10);
    obj1.push(20);
    obj1.push(30);
    
    obj1.display();
    
    cout<<obj1.pop()<<"\n";
    
    obj1.display();
    
    return 0;
}
