//fibonacci series using recursion(ME)

#include<iostream>
using namespace std;

int fibbo(int a,int b,int n)
{
    int c;
    if(n>0)
    {
        cout<<a<<" ";
        c=a+b;
        fibbo(b,c,n-1);
    }
    return 0;
}

int main()
{
  int a=0,b=1,n;
  cin>>n;
  
  fibbo(a,b,n);
  
  return 0;
}
