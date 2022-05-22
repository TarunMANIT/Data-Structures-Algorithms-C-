/* Time Complexity: Theta(n) */

#include <iostream>
using namespace std;

int factorial(int n)
{
    int answer=1;
    for(int i=2;i<=n;i++)
    {
        answer*=i;
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}