/*Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:
Input:
N = 5
Output: 1 1 2 3 5 */
#include<bits/stdc++.h>
using namespace std;
void printFibonacciNumber(long long n)
{
    long long a = 0;
    long long b = 1;
    cout<<1<<" ";
    while(n!=1)
    {
        long long sum = a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
        n--;
    }
}
//Time Complexity: theta(d) Space Complexity: theta(1)

//Driver Code
int main()
{
    long long n = 5;
    printFibonacciNumber(5);
    return 0;
}
