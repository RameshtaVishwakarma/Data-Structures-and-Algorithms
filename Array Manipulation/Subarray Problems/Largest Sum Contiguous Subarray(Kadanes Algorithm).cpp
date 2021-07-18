/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.*/

#include<bits/stdc++.h>
using namespace std;

//Approach: using kadanes algorithm
int maxSubArraySum(int arr[], int n)
{
    int maximum_sum=0,curr_sum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        if(curr_sum>maximum_sum)
        {
            maximum_sum=curr_sum;
        }
        if(curr_sum<0)
        {
            curr_sum=0;
        }
    }
    return maximum_sum;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
