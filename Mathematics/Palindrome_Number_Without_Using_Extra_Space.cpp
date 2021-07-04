/*Given a number ‘n’ and our goal is to find out it is palindrome or not without using
any extra space. We can’t make a new copy of number .
Examples:


Input  : 2332
Output : Yes it is Palindrome.
Explanation:
original number = 2332
reversed number = 2332
Both are same hence the number is palindrome. */

#include<bits/stdc++.h>
using namespace std;

//The approach is to find the leading number and the trailing number simultaneously and check whether they are equal of not.
bool checkPalindrome(int n)
{
    //To find the leading number we would need to divide the number by the thousands place. And to find the thousands place we will use this method.
    int divisor = 1;
    while(n/divisor >= 10)
    {
        divisor *= 10;
    }

    while(n!=0)
    {
        int leading = n/divisor;
        int trailing = n%10;

        if(leading != trailing)
        {
            return false;
        }

        n = (n%divisor)/10;
        divisor = divisor/100; //since two digits are removed
    }
    return true;
}

//Time Complexity: theta(d) where d is the number of digits, space Complexity:O(1)
//Driver code
int main()
{
    int n = 3883;
    if(checkPalindrome(n))
    {
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number is not palindrome"<<endl;
    }
    return 0;
}
