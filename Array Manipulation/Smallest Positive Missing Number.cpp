/*
Difficulty Level : Medium
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing
number is 6.
Example 2:

Input:
N = 5
arr[] = {0,-10,1,3,-20}
Output: 2
Explanation: Smallest positive missing
number is 2. */

#include<bits/stdc++.h>
using namespace std;

/* Approach By Rachit Jain:
1 Traverse the array, Ignore the elements which are greater than n and less than 1.
2 While traversing check a[i]!=a[a[i]-1] if this condition hold true or not .
3 If the above condition is true then swap a[i], a[a[i] – 1]  && swap until a[i] != a[a[i] – 1]  condition will fail .
4 Traverse the array and check whether a[i] != i + 1 then return i + 1.
5 If all are equal to its index then return n+1.*/

int smallestPositiveMissingNumber(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1])
        {
            swap(arr[i],arr[arr[i]-1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i+1!=arr[i])
        return i+1;
    }
    return n+1;
}

int main()
{
    int arr[] = { 2, 3, -7, 6, 8, 1, -10, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = smallestPositiveMissingNumber(arr, n);

    cout << ans;

    return 0;
}
