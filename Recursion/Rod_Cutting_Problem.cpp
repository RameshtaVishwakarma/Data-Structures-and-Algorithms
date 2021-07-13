/*The problem is to cut the rod in maximum number of pieces where the length of the rod is of size n. There are three integers a, b, c. Who specify the
size of each cut.
For eg: n=5, a = 2, b=5, c=1
)/P: 5
n= 23, a =12, b= 9, c=11
)/P: 2

Approach: The approach to solving the problem is to divide the problems into sub-problem
-Divide into smaller Problem
-Find Pattern
-Find the base case
-Have a Leap of faith in recursion
-Solve for bigger problem.

Here for every cut we have to think in all three possible cut which can be make ahead. Hence we use the max function to find out, out of all 3 possible cut
which cut gives us the maximum value. and then increment the count by 1.*/

#include<bits/stdc++.h>
using namespace std;
int maxCuts(int n, int a, int b, int c)
{
    if(n == 0)
    {
        return 0;
    }
    if(n <= 0)
    {
        return -1;
    }
    int res = max(maxCuts(n-a, a, b, c), max(maxCuts(n-b, a, b, c), maxCuts(n-c, a, b, c)));
    if(res == -1)
    {
        return -1;
    }
    return res+1;
}

int main()
{
    int n=5, a=2, b=5, c=1;
    //int n = 5, a = 2, b = 1, c = 5;
    cout<<maxCuts(n,a,b,c)<<endl;
    return 0;
}
