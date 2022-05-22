

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
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)
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