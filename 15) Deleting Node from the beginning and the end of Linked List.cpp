//Deleting Node from the beginning and the end of Linked List

#include<iostream>
using namespace std;


    struct Node
    {
        int data;
        node *next;
    }
    
    node *head=NULL;
    
    void deleteEnd()
    {
        node *ptr,*prev;
        
        if(head==NULL)
            cout<<"list is empty";
            
        else if(head->next==NULL)
        {
           ptr=head;
           head=NULL;
           free(ptr);
        }
        else
        {
            ptr=head;
            
            while(ptr->next!=NULL)
            {
            prev=ptr;
            ptr=ptr->next;
            }
            
            prev->next=NULL;
            free(ptr);
        }
    }

    
    void deleteBeg()
    {
        node *ptr;
        
        if(head==NULL)
        {
            cout<<"list is empty";
        }
        
        else
        {
            ptr=head;
            head=head->next;
            free(ptr);
        }
    }
