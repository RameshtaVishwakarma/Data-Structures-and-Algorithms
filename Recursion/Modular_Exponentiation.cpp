/*You are given two numbers n and p. You need to find np.
Example 1:

Input:
n = 9 p = 9
Output: 3874204899
Explanation: 387420489 is the value
obtained when 9 is raised to the
power of 9.
The problem is same as Fast exponentiation we use modulo M here to computer larger powers within a fixed range.*/

#include<bits/stdc++.h>
using namespace std;
const long M = 1000000007;

long long power(int N,int R)
{
    //Your code here
    if(R == 0)
    {
        return 1;
    }
    long temp = power(N,R/2);
    temp = (temp * temp)%M;
    if(R%2==0)
    {
        return (temp);
    }
    else{
        return (temp*N%M);
    }
}
//Time Complexity: O(logn) Space Complexity: O(logn)

int main()
{
    long long N=12,R=21;
    cout<<power(N,R)<<endl;
    return 0;
}
