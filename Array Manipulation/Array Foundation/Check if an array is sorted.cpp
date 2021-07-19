/*Difficulty Level : Easy
Given an array of size n, write a program to check if it is sorted in ascending order or not. Equal values are allowed in an array and two consecutive equal values are considered sorted.

Examples:

Input : 20 21 45 89 89 90
Output : Yes

Input : 20 20 45 89 89 90
Output : Yes */

#include<bits/stdc++.h>
using namespace std;

Approach 1: iterative
bool checkIfSorted(int arr[], int n)
{
    //Base case
    if(n == 0)
    {
        return false;
    }
    //Iterating over the array while keeping simultaneously checking if current element is smaller than previous element.
    for(int counter = 0;counter<n;counter++)
    {
        if(arr[counter]<arr[counter-1])
        {
            return false;
            break;
        }
    }
    return true;
}

//Time complexity: O(n) Space complexity:O(1)

//Approach 2: solving using recursion
/*My approach here would be to try and implement a tail recursive program to make it compiler friendly.
-> Break down the problem into smaller problems.
-> Try finding a pattern.
-> Derive a base case.
-> Solve for bigger problem.*/

bool checkIfSorted(int arr[], int n)
{
    //Base case:
    if(n==0 || n==1)
    {
        return true;
    }

    //Condition to check
    if(arr[n-1]<arr[n-2])
    {
        return false;
    }

    //Recursive Function call
    checkIfSorted(arr,n-1);
}

////Time complexity: O(n) Space complexity:O(n)

int main()
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (checkIfSorted(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
}
