//Deleting Node if only one pointer to that node is given

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}

node *head=NULL;

void deletenode(node *ptr)
{
    node *temp;
    temp=ptr->next;
    
    ptr->data=temp->data;
    ptr->next=temp->next;
    
    free(temp);
}
