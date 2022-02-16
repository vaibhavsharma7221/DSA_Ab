#include<iostream>
using namespace std;

void inserth(int arr[],int i)
{
    int temp=arr[i];
    
    while(i>1 && temp>arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}

void deleteh(int arr[],int li)
{
    int val=arr[1];
    arr[1]=arr[li];
    arr[li]=val;
    int i=1;
    int c=2*i;
    
    while(c<li-1)
    {
        if(arr[c]<arr[c+1])
        c=c+1;
        
        if(arr[c]>arr[i])
        {
            swap(arr[c],arr[i]);
            i=c;
            c=2*i;
        }
        
        else
        {
            break;
        }
        
    }
}

void display(int arr[], int li)
{
    for(int i=1;i<=li;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int h[]={0,40,25,35,10,5,20,30};
    
    for(int i=2;i<=7;i++)
    {
        inserth(h,i);
    }
    
    display(h,7);
    
   for(int i=7;i>1;i--)
   deleteh(h,i);
    
    cout<<"\n";
    display(h,7);
    
    return 0;
}
