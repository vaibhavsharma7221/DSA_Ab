#include<iostream>
using namespace std;

struct node
{
    char data;
    node *next;
}*top=NULL;

void push(char x)
{
    node *t;
    t=new node();
    
    if(t==NULL)
        cout<<"Stack is Full\n";
        
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

char pop()
{
    node *p;
    char x = -1;
    
    if(top==NULL)
        cout<<"Stack is Empty\n";
        
    else
    {
        p=top;
        top=top->next;
        x=p->data;
        free(p);
    }
    return x;
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
            if(top==NULL);
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
    char *expp="(a+b)*(c-d)";
    
    cout<<isbalanced(expp);
    return 0;
}
