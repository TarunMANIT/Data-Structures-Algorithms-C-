/* Time Complexity: O(min(a,b)) */

#include <iostream>
#include <limits.h>
using namespace std;

int gcd(int a,int b)
{
    while(a!=b)
    {
        a>b ? a=a-b : b=b-a;
    }
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}