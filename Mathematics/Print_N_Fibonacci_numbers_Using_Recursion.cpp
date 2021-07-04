/*Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:
Input:
N = 5
Output: 1 1 2 3 5 */
//While this program is really dumb I don't know why I took this program anyways lets code!!!

#include<bits/stdc++.h>
using namespace std;

int printFibonacciNumber(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return (printFibonacciNumber(n-1) + printFibonacciNumber(n-2));
}

//Driver Code:
int main()
{
    int n=5;
    int temp=1;
    for(int i=0;i<5;i++)
    {
        cout<<printFibonacciNumber(temp)<<endl;
        temp++;
    }
    return 0;
}

