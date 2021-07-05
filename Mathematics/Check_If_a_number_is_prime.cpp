/*A prime number is a natural number greater than 1, which is only divisible by 1 and itself. First few prime numbers are : 2 3 5 7 11 13 17 19 23 …..
Some interesting fact about Prime numbers

-Two is the only even Prime number.
-Every prime number can be represented in form of 6n+1 or 6n-1 except the prime number 2 and 3, where n is a natural number.
-Two and Three are only two consecutive natural numbers that are prime. */

#include<bits/stdc++.h>
using namespace std;

//bool checkPrime(int n)
//{
//    //Base Case
//    if(n<=1)
//        return false;
//    for(int i=2;i<=sqrt(n);i++)
//    {
//        if(n%i == 0)
//            return false;
//    }
//    return true;
//}
//Time Complexity: O(n) Space Complexity: O(1)

//More Efficient method
bool checkPrime(int n)
{
    if(n==2 || n==3)
    {
        return true;
    }
    if(n%2 ==0 || n%3 == 0 || n<=1)
    {
        return false;
    }
    for(int i=5;i<sqrt(n);i+=6)
    {
        if(n%i == 0 || (n%(i+2)) == 0)
            return false;
    }
    return true;
}
//Driver Code
int main()
{
    int n = 57;
    checkPrime(n)?cout<<"The number is prime"<<endl:cout<<"The number is not prime"<<endl;
    return 0;
}
