/* Time Complexity: LCM = O(a*b-max(a,b)) */

#include <iostream>
#include <limits.h>
using namespace std;


int lcm(int a,int b)
{
    int result=max(a,b);
    while(true)
    {
        if(result%a==0 && result%b==0)
        {
            return result;
        }
        result++;
    }
    return result;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}