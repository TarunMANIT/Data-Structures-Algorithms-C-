/* Time Complexity: O(n*sqrt(n)) */

#include <iostream>
using namespace std;

void printPrimes(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    
}