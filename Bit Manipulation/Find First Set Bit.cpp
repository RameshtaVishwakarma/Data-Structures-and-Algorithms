/*Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function.

Example 1:

Input: N = 18
Output: 2
Explanation: Binary representation of
18 is 010010,the first set bit from the
right side is at position 2.
*/
#include<bits/stdc++.h>
using namespace std;

int position(int n)
{
    int count=1;
    while(n)
    {
        if(n%2 !=0)
        {
            return count;
        }
        n=n/2;
        count++;
    }
    return count==1?0:count;
}

//Time Complexity: O(LogN)
//Auxiliary Space: O(1)

//Driver code
int main()
{
    int n=18;
    cout<<position(n)<<endl;
    return 0;
}
