#include<bits/stdc++.h>
using namespace std;

void insert(int *arr,int n)
{
    int temp=arr[n];
    int i=n;
    
    while(i>1 && temp>arr[i/2])
    {
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
}

int main()
{
    int arr[]={0,10,20,30,25,5,40,35};
    
    for(int i=2;i<=7;i++)
    {
        insert(arr,i);
    }
    
    cout<<"heap :";
    for(auto x:arr)
    cout<<x<<" ";
    
    return 0;
}
