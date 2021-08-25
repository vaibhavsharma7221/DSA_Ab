//Finding or Detecting Loop in Linked List

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}

node *head=NULL;

int findloop(node *head)
{
    node *slow,*fast;
    slow=head;
    fast=head;
    
    while(fast!=NULL && fast->link!=NULL)
    {
        fast=fast->link->link;
        slow=slow->link;
        
        if(slow==fast)
        {
            return 1;//returning 1 means loop is found
        }
    }
    return 0;//returning 0 means NULL has been met and there is no loop
}
