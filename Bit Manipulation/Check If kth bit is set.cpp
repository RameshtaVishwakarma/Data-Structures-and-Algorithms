/*Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' should be indexed starting
with 0 from LSB side in binary representation of the number.

Example 1:

Input: N = 4, K = 0
Output: No
Explanation: Binary representation of 4 is 100,
in which 0th bit from LSB is not set.
So, return false. */
#include<bits/stdc++.h>
using namespace std;

bool check(int n, int k)
{
    return n&(1<<k)? true:false;
}

//Time Complexity: O(LogN)
//Auxiliary Space: O(1)

int main()
{
    int n =4;
    int k =0;
    cout<<check(n,k)<<endl;
    return 0;
}
