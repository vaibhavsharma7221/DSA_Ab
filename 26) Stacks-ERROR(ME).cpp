#include<iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
}

void pushh(stack *st, int n)
{
    if(st->top==st->size-1)
        cout<<"Stack Overflow";
    
    else
      {
          st->top++;
          st->s[st->top]=n;
      }
}

int  popp(stack *st)
{
    int x=-1;
    if(st->top==-1)
        cout<<"Stack is Empty";
        
    else
    {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}

int  peek(stack st,int pos)
{
    int x=-1;
    
    if(((st->top)-(st->pos)+1)<0)
        cout<<"Invalid Index";
        
    else
    x=st->s[st->top-pos+1];
    
    return x;
}

int stackTop(stack st)
{
    if(st->top==-1)
        return -1;
        
    else
        return st->s[st->top];
}

int isEmpty(stack st)
{
    if(st->top==-1)
        return 1;
        
    else
        return 0;
}

int isFull(stack st)
{
    if(st->top==st->size-1)
        return 1;
        
    else
        return 0; 
}


int main()
{
    stack st;
    
    cout<<"enter size of stack";
    cin>>st->size;
    
    st->top=-1;
    
    st->s=new st[st->size];
    
    
    pushh(&st,5);
    
    popp(&st);
    
    int pos;
    cout<<"enter position :"
    cin>>pos;
    
    cout<<peek(st,pos)
    
    cout<<stackTop(st);
    
    cout<<isEmpty(st);
    
    cout<<isFull(st);
    
    return 0;
}
