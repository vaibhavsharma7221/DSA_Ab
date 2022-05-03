//Merge sort - recursive algorithm

#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int l,int mid,int h)
{
    
    int i=l;
    int j=mid+1;
    int k=l;
    
    int arr2[100];
    
    while(i<=mid && j<=h)
    {
        if(arr[i]<arr[j])
            arr2[k++]=arr[i++];
            
        else
            arr2[k++]=arr[j++];
    }
    
    while(i<=mid)
        arr2[k++]=arr[i++];
        
    while(j<=h)
        arr2[k++]=arr[j++];
        
    for(int i=l;i<=h;i++)    
        arr[i]=arr2[i];
}

void Mergesort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        Mergesort(arr,l,mid);
        Mergesort(arr,mid+1,h);
        
        Merge(arr,l,mid,h);
    }
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int  l=0;
    int h=n-1;
    
    Mergesort(arr,l,h);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
