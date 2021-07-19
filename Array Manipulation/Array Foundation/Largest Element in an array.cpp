/*Difficulty Level : Basic
Given an array, find the largest element in it.
Example:


Input : arr[] = {10, 20, 4}
Output : 20

Input : arr[] = {20, 10, 20, 4, 100}
Output : 100 */

#include<bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n)
{
    //Declaring a variable to keep a track of maximum element.
    int result=INT_MIN;

    //Traversing the array and keeping a track of result variable.
    for(int counter = 0; counter<n; counter++)
    {
        result=max(result,arr[counter]);
    }
    return result;
}

//Time complexity: O(n) space complexity:O(1)

int main()
{
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest in given array is "
         << findLargestElement(arr, n);
    return 0;
}
