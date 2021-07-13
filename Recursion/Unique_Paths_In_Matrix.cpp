/*The task is to count all the possible paths from top left to bottom right of a m X n matrix with the constraints that from each cell you can either
move only to right or down.
Example 1:

Input: m = 2, n = 2
Output: 2
Explanation: Two possible ways are
RD and DR.

Approach: The approach to solving the problem is to divide the problems into sub-problem
-Divide into smaller Problem
-Find Pattern
-Find the base case
-Have a Leap of faith in recursion
-Solve for bigger problem.

Here we have to consider the paths where in we can only travel in one direction either left to right, vice versa or top to bottom vice versa. Try the problem for
a 2*2 grid. The total no of paths is 2. Now deduce the problem for 3*3 matrix. You will notice a pattern which is n-1,m & m-1,n rows and columns recursive call.
Have a leap of faith and write the function.*/

#include<bits/stdc++.h>
using namespace std;

int numberOfPaths(int m, int n)
{
    if(n == 1 || m == 1)
    {
        return 1;
    }
    return (numberOfPaths(n-1,m) + numberOfPaths(n,m-1));
}

int main()
{
    int m=3,n=3;
    cout<<numberOfPaths(m,n)<<endl;
}
