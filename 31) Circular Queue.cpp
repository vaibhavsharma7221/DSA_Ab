#include<bits/stdc++.h>
using namespace std;

struct Cqueue
{
    int front;
    int rear;
    int size;
    int *cqarr;
};

void create(Cqueue *q,int size)
{
    q->front=q->rear=0;
    q->size=size;
    q->cqarr=new int(q->size);
}

void enqueue(Cqueue *q,int x)
{
   if(((q->rear+1)%q->size)==q->front)
        cout<<"queue is full\n";
        
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->cqarr[q->rear]=x;
    }
}

int dequeue(Cqueue *q)
{
   int x=-1;
   if(q->front==q->rear)
        cout<<"queue is empty";
    
   else
   {
       q->front=(q->front+1)%q->size;
       x=q->cqarr[q->front];
   }
   return x;
}

void display(Cqueue q)
{
   int i=q.front+1;
   
   do{
       cout<<q.cqarr[i]<<" ";
       i=(i+1)%q.size;
   }
   while(i!=(q.rear+1)%q.size);
   
   cout<<"\n";
}

int main()
{
    Cqueue q;
    
    create(&q,5);
    
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    
    display(q);
    
    cout<<"\n"<<dequeue(&q)<<"\n";
    cout<<dequeue(&q)<<"\n";
    
    display(q);
    
    enqueue(&q,50);
    enqueue(&q,60);
    
    display(q);
    
    
    return 0;
}
