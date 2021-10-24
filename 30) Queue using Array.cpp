//Queue using Array

#include<iostream>
using namespace std;

struct queue
{
    int size;
    int front;
    int rear;
    int *arrq;
};

void create(queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->arrq=new int(q->size);
}

void enqueue(queue *q,int x)
{
    if(q->rear==q->size-1)
        cout<<"Queue is full\n";
    
    else
    {
        q->rear++;
        q->arrq[q->rear]=x;
    }
}

int dequeue(queue *q)
{
    int x=-1;
    if(q->front==q->rear)
        cout<<"Queue is empty\n";
        
    else
    {
        q->front++;
        x=q->arrq[q->rear];
    }
    return x;
}

void display(queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
        cout<<q.arrq[i]<<" ";
        
    cout<<"\n";    
}

int main()
{
    queue q;
    
    create(&q,5);
    
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    
    display(q);
    
    cout<<dequeue(&q)<<"\n";
    
    display(q);
    
    return 0;
}
