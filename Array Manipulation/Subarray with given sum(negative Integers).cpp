/*Given an unsorted array of integers, find the number of subarrays having sum exactly equal to a given number k.
Examples:

Input : arr[] = {10, 2, -2, -20, 10},
        k = -10
Output : 3
Subarrays: arr[0...3], arr[1...4], arr[3..4]
have sum exactly equal to -10. */

#include<bits/stdc++.h>
using namespace std;

//Approach 1:
int findSubarraySum(int arr[], int n, int x)
{
   int res=0;
   for (int i = 0; i < n; i++)
   {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      // Calculate required sum
      sum += arr[j];

      // Check if sum is equal to
      // required sum
      if (sum == x)
        res++;
    }
  }
  return res;
}

//Approach 2: using prefix Sum method.
int findSubarraySum(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    int prefix_sum=0, count=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        if(prefix_sum == sum)
        {
            count++;
        }
        if(m.find(prefix_sum-sum) != m.end())
        {
            count+=m[prefix_sum-sum];
            m[prefix_sum]++;
        }
        else{
            m[prefix_sum]++;
        }
    }
    return count;
}

int main()
{
    int arr[] = { 10, 2, -2, -20, 10 };
    int sum = -10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findSubarraySum(arr, n, sum);
    return 0;
}
