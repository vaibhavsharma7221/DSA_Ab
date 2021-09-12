//Stack using array

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

void displays(stack st)
{
    for(int i=st.top;i>=0;i--)
        cout<<st.s[i]<<" ";
        
    cout<<"\n";    
}

void push(stack *st,int x)
{
    if(st->top==st->size-1)
        cout<<"stack overflow\n";
        
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

int pop(stack *st)
{
    int x=-1;
    
    if(st->top==-1)
        cout<<"Stack Underflow\n";
    
    else
    {
        x=st->s[st->top];//x=st->s[st->top--];
        st->top--;
    }
    return x;
}

int peek(stack st,int pos)
{
    int x=-1;
    
    if(st.top-pos+1<0)
        cout<<"Invalid index";
        
    else
        x=st.s[st.top-pos+1];
        
    return x;    
}

int isEmpty(stack st)
{
    if(st.top==-1)
        return 1;
    return 0;    
}

int isFull(stack st)
{
    return st.top==st.size-1;
}

int stackTop(stack st)
{
    if(!isEmpty(st))
        return st.s[st.top];
    return -1;    
} 

int main()
{
    stack st;
    
    creates(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    
    cout<< peek(st,3)<<"\n";
    displays(st);
    return 0;
}
