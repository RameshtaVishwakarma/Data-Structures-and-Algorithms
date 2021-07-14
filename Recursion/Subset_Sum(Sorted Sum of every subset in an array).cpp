/*Given a list arr of N integers, print sums of all subsets in it. Output should be printed in increasing order of sums.
Example 1:

Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then
Sum = 2+3 = 5.

Approach: The approach to solving the problem is to divide the problems into sub-problem
-Divide into smaller Problem
-Find Pattern
-Find the base case
-Have a Leap of faith in recursion
-Solve for bigger problem.

The sum is similar to power set i.e subset generation of strings here we just need to store the sum of every subset an sort them.*/

#include<bits/stdc++.h>
using namespace std;

void subset(vector<int> &arr, int N, int i, int sum, vector<int> &ans)
{
    if(i == N)
    {
        ans.push_back(sum);
        return;
    }
    subset(arr,N,i+1,sum,ans);
    subset(arr,N,i+1,sum+arr[i],ans);
}

//Expected Time Complexity: O(2^N)
//Expected Auxiliary Space: O(2^N)

int main()
{
    vector<int> result;
    vector<int> arr{1,2,3};
    int N = 3;
    subset(arr,N,0,0,result);
    sort(result.begin(),result.end());
    for(auto x: result)
    {
        cout<<x<<endl;
    }
    return 0;
}
