/* Time Complexity: Theta(n) */

#include <iostream>
using namespace std;

int factorial(int n)
{
    //Base case
    if(n==0)
    {
        return 1;
    }
    //Recursive case
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}