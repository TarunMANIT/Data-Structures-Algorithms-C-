/* Time Complexity: Theta(n) */

#include <iostream>
using namespace std;

int factorial_rec(int n)
{
    //Base case
    if(n==0)
    {
        return 1;
    }
    //Recursive case
    return n*factorial_rec(n-1);
}

int countZeroes(int n)
{
    int factorial = factorial_rec(n);
    int count=0;
    while(factorial%10==0)
    {
        count++;
        factorial=factorial/10;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<countZeroes(n);
}