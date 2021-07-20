/*Maximum difference between two elements such that larger element appears after the smaller number
Difficulty Level : Medium

Given an array arr[] of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number.

Examples :

Input : arr = {2, 3, 10, 6, 4, 8, 1}
Output : 8
Explanation : The maximum difference is between 10 and 2.

Input : arr = {7, 9, 5, 6, 3, 2}
Output : 2
Explanation : The maximum difference is between 9 and 7 */

#include<bits/stdc++.h>
using namespace std;

//Approach 1: Naive approach run 2 for loops and keep a count of maximum difference.
/*Approach 2: While we can exploit the naive approach by finding a pattern. We can exploit the fact that the largest number is always ahead and not at the
backwards of the current number so we won't need backtracking here. What we can do is take every element as the maximum element while simultaneously keeping
a track of minimum element till that place. So we can find the difference and return the value at the end.*/

int maxIndexDiff(int arr[], int n)
{
    int minValue = arr[0];
    int result = arr[1]-arr[0];

    for(int counter = 1; counter <n; counter++)
    {
        result = max(result,arr[counter]-minValue);
        minValue = min(minValue,arr[counter]);
    }
    return result;
}
