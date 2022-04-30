//Merging two lists in a single array

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int mid,int e)
{
    int c[e];
    
    int i=s,j=mid+1,k=0;
    
    while(i<=mid && j<e)
    {
        if(arr[i]<arr[j])
        c[k++]=arr[i++];
        
        else
        c[k++]=arr[j++];
    }
    
    while(i<=mid)
        c[k++]=arr[i++];
        
    while(j<e)
        c[k++]=arr[j++];
        
    for(int i=0;i<e;i++)
        arr[i]=c[i];
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int mid=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
        mid=i;
        break;
        }
    }
    
    merge(arr,0,mid,n);
    
    for(auto x:arr)
    cout<<x<<" ";
}
