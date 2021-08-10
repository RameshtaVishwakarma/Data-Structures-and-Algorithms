/*Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first,
then all 1s and all 2s in last.
Examples:
Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}
Approach: The problem is similar to our old post Segregate 0s and 1s in an array, and both of these problems are variation of famous Dutch national
flag problem. The problem was posed with three colours, here `0′, `1′ and `2′. The array is divided into four sections.0-low, low-mid, mid-high, high-n-1
The dutch national flag is simply a variation of hoares partition*/

#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high--]);
        }
    }
}

// Function to print array arr[]
void printArray(int arr[], int n)
{
    // Iterate and print every element
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Driver Code
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    cout << "array after segregation ";
    printArray(arr, n);
    return 0;
}
/*Time Complexity: O(n).
Only one traversal of the array is needed.
Space Complexity: O(1).
No extra space is required.*/
