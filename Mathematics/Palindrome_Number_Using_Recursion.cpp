/*Given an integer, check whether it is a palindrome or not.

Example 1:

Input: n = 55555
Output: Yes

Example 2:

Input: n = 123
Output: No */
#include<bits/stdc++.h>
using namespace std;

//The approach is to reverse the number by passing the number and the remainder of the number same as we did in the iterative solution. When the number will be
//reversed we ill check whether reverse number is equal to given number.
int rev(int num, int rem)
{
    if(num == 0)
        return rem;
    //stores the Remainder i.e. storing the reverse of the number.
    rem = rem*10 + num%10;
    rev(num/10,rem);
}

//Time Complexity: theta(d) Space Complexity: theta(d)

//Driver code
int main()
{
    int n = 3993;
    int revnum = rev(n,0);
    if(n == revnum)
    {
        cout<<"Number is Palindrome"<<endl;
    }
    else
    {
        cout<<"Number is not palindrome"<<endl;
    }
    return 0;
}
