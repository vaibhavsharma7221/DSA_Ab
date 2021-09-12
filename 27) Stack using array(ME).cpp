#include<iostream>
using namespace std;

struct stack
{
int size;
int top;
int *s;
};

void creates(stack *st)
{
    cout<<"Enter size of stack :";
    cin>>st->size;
    st->top=-1;
    st->s=new int(st->size);
}

void pushs(stack *st,int n)
{
    if(st->top==st->size-1)
        cout<<"stack overflow";
        
    else
    {
        st->top++;
        st->s[st->top]=n;
    }
}

int  pop(stack *st)
{
    int x=-1;
    if(st->top==-1)
        cout<<"Stack underflow";
        
    else
    {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(stack st,int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
        cout<<"Invalid Index";
    
    else
    x= st.s[st.top-pos+1];
    
    return x;    
}

int stackTop(stack st)
{
    int x=-1;
    if(st.top==-1)
        cout<<"Stack Underflow";
        
    else    
    x=st.s[st.top];
    
    return x;
}

int isEmpty(stack st)
{
    return st.top==-1;
}

int isFull(stack st)
{
    return st.top==st.size-1;
}

void display(stack st)
{
    for(int i=st.top;i>=0;i--)
        cout<<st.s[i]<<" ";
}

int main()
{
    stack st;
    
    creates(&st);
    
    pushs(&st,10);
    pushs(&st,20);
    pushs(&st,30);
    pushs(&st,40);
    
    pop(&st);
    
    cout<<peek(st,2)<<"\n";
    
    cout<<stackTop(st)<<"\n";
    
    cout<<isEmpty(st)<<"\n";
    
    cout<<isFull(st)<<"\n";
    
    pushs(&st,60);
    pushs(&st,70);
    
    cout<<isFull(st)<<"\n";
    
    display(st);
    
    return 0;
}
