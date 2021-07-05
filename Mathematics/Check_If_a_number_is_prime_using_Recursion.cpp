/*A prime number is a natural number greater than 1, which is only divisible by 1 and itself. First few prime numbers are : 2 3 5 7 11 13 17 19 23 …..
Some interesting fact about Prime numbers

-Two is the only even Prime number.
-Every prime number can be represented in form of 6n+1 or 6n-1 except the prime number 2 and 3, where n is a natural number.
-Two and Three are only two consecutive natural numbers that are prime. */

#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    static int i =2;
    if(n == 0 || n==1)
        return false;

    if(n == i)
        return true;

    if(n%i == 0)
        return false;

    i++;
    return checkPrime(n);
}
//Time Complexity:O(n) Space Complexity:O(n). Since extra recursive call stack.

//Driver Code
int main()
{
    int n = 5;
    checkPrime(n)?cout<<"The number is prime"<<endl:cout<<"The number is not prime"<<endl;
    return 0;
}
