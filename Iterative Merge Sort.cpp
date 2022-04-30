// Iterative Merge Sort

#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int l,int m,int h)
{
    int i=l,j=m+1,k=l;
    int b[100];
    
    while(i<=m && j<=h)
    {
    if(arr[i]<arr[j])
        b[k++]=arr[i++];
        
    else
        b[k++]=arr[j++];
    }
    
    while(i<=m)
        b[k++]=arr[i++];
    
    while(j<=h)
        b[k++]=arr[j++];
        
        
    for(int i=l;i<=h;i++)    
    arr[i]=b[i];
}

void imergesort(int a[],int n)
{
    int p,i,l,h,mid;
    
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(a,l,mid,h);
        }
    }
    
    if(p/2<n)
        merge(a,0,p/2-1,n-1);
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    imergesort(arr,n);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" "; 
}
