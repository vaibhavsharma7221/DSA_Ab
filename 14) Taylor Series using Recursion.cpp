//Taylor Series using Recursion

#include<iostream>
using namespace std;

 double tay(int x,int n)
{
    static double f=1,p=1;
    if(n==0)
       return 1;
       
    else
    {
       double r=tay(x,n-1);
        f=f*n;
        p=p*x;
        return(r+p/f);
    }    
}

int main()
{
    int x,n;
    cin>>x>> n;
    
    cout<<tay(x,n);
    
    return 0;
}   
