//Power using Recursion(ME)

#include<iostream>
using namespace std;

int power(int n,int p)
{
    if(p==0)
    return 1;
    
    else
    return(power(n,p-1)*n);
}

int main()
{
    int n,p;
    cin>>n >>p;
    
    cout<<power(n,p);
    return 0;
}
