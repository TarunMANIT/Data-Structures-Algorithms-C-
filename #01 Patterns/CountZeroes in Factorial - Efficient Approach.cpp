/* Time Complexity: Theta(log5(n)) */

#include <iostream>
#include <limits.h>
using namespace std;

int countZeroes(int n)
{
    int count=0;
    for(int i=5;i<=n;i=i*5)
    {
        count = count + (n / i);
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<countZeroes(n);
}