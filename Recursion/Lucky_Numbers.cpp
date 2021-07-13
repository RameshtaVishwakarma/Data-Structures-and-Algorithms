/*Lucky numbers are subset of integers. Rather than going into much theory, let us see the process of arriving at lucky numbers,
Take the set of integers
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……
First, delete every second number, we get following reduced set.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………
Now, delete every third number, we get
1, 3, 7, 9, 13, 15, 19,….….
Continue this process indefinitely……
Any number that does NOT get deleted due to above process is called “lucky”.

Example 1:

Input:
N = 5
Output: 0
Explanation: 5 is not a lucky number
as it gets deleted in the second
iteration.

Approach: The approach to solving the problem is to divide the problems into sub-problem
-Divide into smaller Problem
-Find Pattern
-Find the base case
-Have a Leap of faith in recursion
-Solve for bigger problem.

Maintain a counter and check whether the counter is divisible by the current position if yes then return no. Check if at any point counter is greater than
current position it means our number is secured.*/

#include<bits/stdc++.h>
using namespace std;
static int current = 2;
bool isLucky(int n)
{
    if(current > n)
    {
        return 1;
    }
    if(n%current == 0)
    {
        return 0;
    }
    current++;
    return isLucky(n-(n/current));
}

int main()
{
    int n = 74;
    cout<<isLucky(n)<<endl;
}
