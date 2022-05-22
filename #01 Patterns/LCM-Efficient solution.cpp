/* Time Complexity: GCD = O(log(min(a,b))) */
/* Time Complexity: LCM = O(log(min(a,b))+constant */

#include <iostream>
#include <limits.h>
using namespace std;

int gcd(int a,int b)
{
    //Base case
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}