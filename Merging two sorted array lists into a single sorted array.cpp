//Merging two sorted array lists into a single sorted array

#include<bits/stdc++.h>
using  namespace std;

void merge(int a[],int b[],int n,int m)
{
    int t=n+m;
    int c[t];
    
    int i=0,j=0,k=0;
    
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        
        else
        c[k++]=b[j++];
    }
    
    while(i<n)
        c[k++]=a[i++];
        
    
    while(j<m)
        c[k++]=b[j++]; 
        
    
    for(int i=0;i<t;i++)
        cout<<c[i]<<" ";
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    int a[n];
    int b[m];
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int j=0;j<m;j++)
    cin>>b[j];
    
    merge(a,b,n,m);
}
