

#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;

void primeFactors(int n)
{
    if(n<=1)
    {
        return;
    }
    while(n%2==0)
    {
        cout<<"2"<<" ";
        n=n/2;
    }
    while(n%3==0)
    {
        cout<<"3"<<" ";
        n=n/3;
    }
    for(int i=5;i<=sqrt(n);i=i+6)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2))
        {
            cout<<i+2<<" ";
            n=n/(i+2);
        }
    }
    if(n>3)
    {
        cout<<n;
    }
}

int main()
{
    int n;
    cin>>n;
    //isPrime(n) ? cout<<"Prime" : cout<<"Not Prime";
    primeFactors(n);
}