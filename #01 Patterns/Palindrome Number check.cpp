/* Time Complexity: Theta(D)
   D-> Number of digites */

#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int reverse=0;
    int temp=n;
    while(temp!=0)
    {
        int last_digit=temp%10;
        reverse = reverse*10+last_digit;
        temp=temp/10;
    }
    return reverse;
}

bool isPalindrome(int n)
{
    return reverseNumber(n)==n;
}

int main()
{
    int n;
    cin>>n;
    //cout<<reverseNumber(n);
    isPalindrome(n) ? cout<<"Palindrome" : cout<<"Not a Palindrome";
}