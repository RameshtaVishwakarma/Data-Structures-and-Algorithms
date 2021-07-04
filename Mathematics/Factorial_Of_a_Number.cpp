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
    int factorial = 1;
    while(n!=0)
    {
        factorial *= n;
        n-=1;
    }
    return factorial;
}
//Time complexity: theta(d) Space Complexity O(1)

//Driver code
int main()
{
    int n = 10;
    cout<<findFactorial(n)<<endl;
    return 0;
}
