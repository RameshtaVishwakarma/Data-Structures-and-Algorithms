/*Given a positive integer, N. Find the factorial of N.


Example 1:

Input:
N = 5
Output:
120
Explanation:
5*4*3*2*1 = 120 */

#include<bits/stdc++.h>
using namespace std;

int findFactorial(int n)
{
    if(n == 0)
        return 1;

    return n*findFactorial(n-1);
}

//Time complexity: theta(d) space Complexity : theta(d) //Where d is the digits
//There would be n+1 function calls in function call stack. The recursive solution causes extra overhead

//Driver code
int main()
{
    int n = 10;
    cout<<findFactorial(n)<<endl;
    return 0;
}
