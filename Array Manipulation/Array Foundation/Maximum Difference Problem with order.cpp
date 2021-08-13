/*
Difficulty Level : Easy
Given an array arr[] of integers, find out the maximum difference between any two elements such that larger element appears after the smaller number.

Examples :

Input : arr = {2, 3, 10, 6, 4, 8, 1} also take an example {2, 3, 10, 1, 6, 4, 10, 1} this test case will give you a hint
Output : 8
Explanation : The maximum difference is between 10 and 2.

Input : arr = {7, 9, 5, 6, 3, 2}
Output : 2
Explanation : The maximum difference is between 9 and 7.
*/

#include<bits/stdc++.h>
using namespace std;

/*Approach: We can also use the brute force approach using two for loops. But this problem can be simply solved by keeping a track of maximum difference so
far. This involves updating the minimum element because think. The lesser the left side value the more the maximum value. We consider every element as maximum
value here.*/
int maxDiffrence(int arr[], int n)
{
    //Edge case:
    if(n == 0)
        return -1;
    if(n == 1)
        return arr[0];
    int max_diff = arr[1]-arr[0];
    int minElement = arr[0];

    //iterating over the array
    for(int i=1;i<n;i++)
    {
        if(arr[i] - minElement > max_diff)
        {
            max_diff = arr[i] - minElement;
        }
        if(minElement > arr[i])
        {
            minElement = arr[i];
        }
    }
    return max_diff;
}
//Time Complexity : O(n) Space Complexity : O(1)

//Driver Code:
int main()
{
    int arr[]={2, 4, 8, 7, 7, 9, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxDiffrence(arr,n)<<endl;
    return 0;
}
