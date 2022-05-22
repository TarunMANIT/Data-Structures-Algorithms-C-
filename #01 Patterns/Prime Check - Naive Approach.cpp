/* Time Complexity: GCD = O(n) */

#include <iostream>
#include <limits.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        //Check
        if(n%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    isPrime(n) ? cout<<"Prime" : cout<<"Not Prime";
}