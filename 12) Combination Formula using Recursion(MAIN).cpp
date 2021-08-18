//Combination Formula using Recursion(MAIN)

#include<iostream>
using namespace std;

int combi(int n,int r)
{
    if(r==0||n==r)
       return 1;
       
    else 
       return (combi(n-1,r-1)+combi(n-1,r));
       
    
}

int main()
{
    int n,r;
    cin>>n>> r;
    
    cout<<combi(n,r);
    return 0;
}
