/*Difficulty Level : Basic

Given an array (or string), the task is to reverse the array/string.
Examples :

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/

#include<bits/stdc++.h>
using namespace std;

//Approach 1: Iterative Approach
//since the problem is too basic and the interviewer checks for modularization of code. I am also writing the swap function.

//Swap Function to swap the array elements
void swapElements(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Print function
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

//Reverse Function
void reverseArray(int arr[], int n)
{
    //Base Case:
    if(n == 0)
    {
        cout<<"-1"<<endl;
    }
    for(int i=0;i<n/2;i++)
    {
        swapElements(&arr[i],&arr[n-i-1]);
    }
}

//Time complexity: O(n) Space complexity:O(1)

//Approach 2: Recursive function
void reverseArray(int arr[], int start, int end)
{
    //Base case:
    if (start >= end)
    return;

    swapElements(&arr[start],&arr[end])

    // Recursive Function calling
    reverseArray(arr, start + 1, end - 1);
}

//Time complexity: O(n) Space complexity:O(n)

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Function calling
    reverseArray(arr,n);

    cout << "Reversed array is" << endl;
    // To print the Reversed array
    printArray(arr, n);

    return 0;
}
