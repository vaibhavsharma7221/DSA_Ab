//combination formula(ME)

#include<iostream>

using namespace std;

int fact(int n)
{
    if(n<=1)
       return 1;
    else
       return fact(n-1)*n;
}

int main()
{
    int n,r;
    
    cin>>n>> r;
    
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    
    cout<<a/(b*c);
    
    return 0;
}
