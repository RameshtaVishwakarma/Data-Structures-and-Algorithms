/*Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
Example 1:

Input: N = 1
Output: true
Explanation:
1 is equal to 2 raised to 0 (20 = 1). */

#include<bits/stdc++.h>
using namespace std;

bool isPowerofTwo(long long n){

    if(n==0){
        return false;
    }else
    return((n & (n-1))==0);

}

//Time Complexity: O(LogN)
//Auxiliary Space: O(1)

//Driver code
int main()
{
    int n=18;
    cout<<isPowerofTwo(n)<<endl;
    return 0;
}
