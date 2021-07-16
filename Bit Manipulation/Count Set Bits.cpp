/*Given a positive integer N, print count of set bits in it.
Example 1:

Input:
N = 6
Output:
2
Explanation:
Binary representation is '110'
So the count of the set bit is 2.*/

#include<bits/stdc++.h>
using namespace std;

int setBits(int n) {
    // Write Your Code here
    int count = 0;
    while(n)
    {
        n=(n & n-1);
        count++;
    }
    return count;
}

//Time Complexity: O(LogN)
//Auxiliary Space: O(1)

int main()
{
    int n=18;
    cout<<setBits(n)<<endl;
    return 0;
}
