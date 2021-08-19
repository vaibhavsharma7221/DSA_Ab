//Taylor Series using Iterative method

#include<iostream>
using namespace std;

double e(double x,double n)
{
    double s=1;
    while(n>0)
    {
        s=(1+x/n*s);
        n--;
    }
    return s;
}

int main()
{
    double x,n;
    cin>>x >>n;
    
    cout<<e(x,n);
    return 0;
}
