/*
Difficulty Level : Easy
Given an array of integers, our task is to write a program that efficiently finds the second largest element present in the array.
Example:

Input: arr[] = {12, 35, 1, 10, 34, 1}
Output: The second largest element is 34.
Explanation: The largest element of the
array is 35 and the second
largest element is 34*/

#include<bits/stdc++.h>
using namespace std;

//Approach 1: sort the array or find largest then find second largest.

//Approach 2:
int secondLargestElement(int arr[], int n)
{
    //Base case
    if(n == 0)
    {
        return -1;
    }
    //Initialize two pointers one which will keep a track of maximum element and another which will keep a track of minimum element.
    int leading = arr[0];
    int trackmin = -1;

    //Iterating over the array
    for(int counter = 1;counter<n;counter++)
    {
        //Finding the maximum element and initializing the minimum element simultaneously
        if(arr[counter] > leading)
        {
            trackmin = leading;
            leading = arr[counter];
        }
        //There can also be a case where the second largest element is greater than current minimum but less than largest element.
        else if(arr[counter] > trackmin && arr[counter] != leading)
        {
            trackmin = arr[counter];
        }
    }
    return trackmin;
}

//Time Complexity: O(n). Auxiliary space: O(1).

int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<secondLargestElement(arr, n);
    return 0;
}
