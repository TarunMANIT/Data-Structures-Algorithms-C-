/* Time Complexity: O(sqrt(n)) */

#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;

void printDivisors(int n)
{
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(i!=n/i)
            {
                cout<<n/i<<" ";
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    printDivisors(n);
}