#include<iostream>
using namespace std;

struct node
{
    char data;
    node *next;
}*top=NULL;


void push(char x)
{
    node *t=new node();
    
    if(t==NULL)
        cout<<"Stack is full\n";
        
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

char pop()
{
    node *t;
    char x=-1;
    
    if(top==NULL)
        cout<<"stack is empty";
        
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

void display()
{
    node *t;
    t=top;
    
    while(t!=NULL)
    {
        cout<<t->data;
    }
    cout<<"\n";
}

int isbalanced(char *expp)
{
    int i;
    
    for(i=0;expp[i]!='\0';i++)
    {
        if(expp[i]=='(')
            push(expp[i]);
            
        else if(expp[i]==')')
        {
            if(top==NULL)
                return 0;
            pop();    
        }
    }
    if(top==NULL)
        return 1;
    
    else
        return 0;
}

int main()
{
    char *expp="((a+b)*(c-d))";//char expp[]="(((a+b)*(c-d)))";
    
    cout<<isbalanced(expp);
    
    return 0;
}
