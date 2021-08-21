//Finding Middle Element of a Linked List

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head=NULL;

void showMid()
{
    node *slow=head;
    node *fast=head;
    
    if(head==NULL)
        cout<<"list is empty";
     
    else
    {
        while(fast!=NULL||fast->next!=NULL)
        {
        slow=slow->next;
        fast=fast->next->next;
        }
        cout<<"middle elenent :"<<slow->data;
        }
    }
}
