/* Difficulty Level : Easy
Last Updated : 31 May, 2021
Given an array of integers and a number k, find the maximum sum of a subarray of size k.

Examples:

Input  : arr[] = {100, 200, 300, 400}
         k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23}
of size 4.*/

#include<bits/stdc++.h>
using namespace std;

//Approach: Use sliding window techique
int maxSum(int arr[], int n, int k)
{
    int currSum = 0, result = INT_MIN;
    for(int i = 0;i<k;i++)
    {
        currSum+=arr[i];
    }
    result = currSum;
    for(int i=k;i<n;i++)
    {
        currSum += (arr[i]-arr[i-k]);
        result = max(result, currSum);
    }
    return result;
}

//Time complexity: O(n) Space Complexity: O(1)
//Driver code
int main()
{
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxSum(arr, n, k);
    return 0;
}
