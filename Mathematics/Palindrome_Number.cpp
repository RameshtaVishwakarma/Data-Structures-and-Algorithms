/*Given an integer, check whether it is a palindrome or not.

Example 1:

Input: n = 55555
Output: Yes

Example 2:

Input: n = 123
Output: No */
#include<bits/stdc++.h>
using namespace std;

//The idea is to reverse the number and check if the reverse number matches the given number
bool checkPalindrome(int n)
{
    int rem=0;
    int orignalNo = n;
    while(n!=0)
    {
        rem = n%10 + rem*10;
        n=n/10;
    }
    return(rem == orignalNo);
}

//Time Complexity: theta(d) where d is the number of digits, space Complexity:O(1)
//Driver Code
int main()
{
    int n = 38873;
    if(checkPalindrome(n))
    {
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number is not palindrome"<<endl;
    }
    return 0;
}
