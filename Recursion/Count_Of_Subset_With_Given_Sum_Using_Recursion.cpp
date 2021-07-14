/*Given an array arr[] of length N and an integer X, the task is to find the number of subsets with a sum equal to X using recursion.
Examples:

Input: arr[] = {2, 3, 5, 6, 8, 10}, X = 10
Output: 3
Explanation:
All possible subsets with sum 10 are {2, 3, 5}, {2, 8}, {10}
Input: arr[] = {1, 2, 3, 4, 5}, X = 7
Output: 3
Explanation:
All possible subsets with sum 7 are {2, 5}, {3, 4}, {1, 2, 4}

Approach: The idea is to recursively check all the subsets. If any subset has the sum equal to N, then increment the count by 1. Else, continue.
In order to form a subset, there are two cases for every element:
Include the element in the set.
Exclude the element in the set.*/

#include<bits/stdc++.h>
using namespace std;

int countSubset(int arr[], int sum, int N)
{
    if(N == 0)
    {
        return (sum==0)?1:0;
    }
    return countSubset(arr,sum,N-1) + countSubset(arr,sum-arr[N-1],N-1);
}

int main()
{
    int n = 3, arr[]= {10, 20, 15}, sum = 25;
    cout<<countSubset(arr,sum,n);
    return 0;
}
