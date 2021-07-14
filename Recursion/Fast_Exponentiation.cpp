/*You are given two numbers n and p. You need to find np.
Example 1:

Input:
n = 9 p = 9
Output: 3874204899
Explanation: 387420489 is the value
obtained when 9 is raised to the
power of 9.

The problem is quite simple but we have to do it in O(logn) time complexity which makes it challenging. The focus is on finding the power of a large number
using fast exponentiation. The brutw force way is to multiply till n times.*/

#include<bits/stdc++.h>
using namespace std;

long long int RecursivePower(int n,int p)
{
    //Your code here
    if(p == 0)
    {
        return 1;
    }
    if(p == 1)
    {
        return n;
    }
    else
    {
        long long int R = RecursivePower(n,p/2);
        if(p%2 == 0)
        {
            return R*R;
        }else{
            return R*n*R;
        }
    }
}
//Time Complexity: O(logn) Space Complexity: O(logn)

int main()
{
    int a=9,n=9;
    cout<<RecursivePower(a,n)<<endl;
    return 0;
}
