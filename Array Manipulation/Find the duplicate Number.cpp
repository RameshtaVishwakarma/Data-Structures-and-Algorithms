/*Difficulty Level : Medium

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

Example 2:
Input: nums = [3,1,3,4,2]
Output: 3*/

#include<bits/stdc++.h>
using namespace std;

/*Approach 1:
This approach only works for arrays having at most 2 duplicate elements i.e It will not work if the array contains more than 2 duplicates of an element.
For example: {1, 6, 3, 1, 3, 6, 6} it will give output as : 1 3 6 6.

->Traverse the array from start to end.
->For every element,take its absolute value and if the abs(array[i])‘th element is positive, the element has not encountered before, else if negative the
element has been encountered before print the absolute value of the current element. */

int duplicateElement(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])]>0)
            {
                arr[abs(arr[i])] = -arr[abs(arr[i])];
            }
            else{
                return abs(arr[i]);
            }
    }
    return -1;
}
//Time Complexity : O(n) Space Complexity : O(1)

/* Approach 2: The basic idea is to use a HashMap to solve the problem. But there is a catch, the numbers in the array are from 0 to n-1, and the input
array has length n. So, the input array can be used as a HashMap. While Traversing the array, if an element ‘a’ is encountered then increase the value of
a%n‘th element by n. The frequency can be retrieved by dividing the a % n’th element by n.*/

int main()
{

    int numRay[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
    int arr_size = sizeof(numRay) / sizeof(numRay[0]);
    // count the frequency
    for (int i = 0; i < arr_size; i++) {
        numRay[numRay[i] % arr_size]
            = numRay[numRay[i] % arr_size] + arr_size;
    }
    cout << "The repeating elements are : " << endl;
    for (int i = 0; i < arr_size; i++) {
        if (numRay[i] >= arr_size * 2) {
            cout << i << " " << endl;
        }
    }
    return 0;
}

//Time Complexity : O(n) Space Complexity : O(1)
// Driver Code
int main()
{
    int arr[] = { 1, 2, 3, 1, 3, 6, 6 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    duplicateElement(arr, arr_size);
    return 0;
}
