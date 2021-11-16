#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*front=NULL,*rear=NULL;


void enqueue(int x)
{
    node* t=new node();
    
    if(t==NULL)
        cout<<"queue is empty\n";
        
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
    
    if(front==NULL)
        cout<<"queue is empty\n";
        
    else
    {
        node *t=front;
        
        front=front->next;
        
        x=t->data;
        
        free(t);
    }
    return x;
}

int isempty()
{
    return front==NULL;
}

void bfs(int g[][7],int start,int n)
{
    int i=start;
    int visited[n]={0};
    
    cout<<i<<" ";
    visited[i]=1;
    enqueue(i);
    
    while(!isempty())
    {
        i=dequeue();
        
        for(int j=1;j<=n;j++)
        {
            if(g[i][j]==1&&visited[j]==0)
            {
                cout<<j<<" ";
                enqueue(j);
                visited[j]=1;
            }
        }
    }
}

int main()
{
    int g[7][7]={{0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,0,0},
                 {0,1,0,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}};
    
    bfs(g,4,7);
    
    return 0;
}
