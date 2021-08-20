#include<iostream>
using namespace std;


struct node
{
    int data;
    node *next;
};

node *head=NULL;

int main()
{
    node *ptr= new node();
    ptr->data=2;
    ptr->next=NULL;

    head=ptr;
    
    return 0;
}
