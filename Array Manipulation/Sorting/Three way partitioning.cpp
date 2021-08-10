/*Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified array.

Example :
Input:
n = 5
A[] = {1, 2, 3, 3, 4}
[a, b] = [1, 2]
Output: 1
Explanation: One possible arrangement is:
{1, 2, 3, 3, 4}. If you return a valid
arrangement, output will be 1.
The approach is same as dutch national flag algorithm. Please refer hoares partition */

#include<bits/stdc++.h>
using namespace std;
void threeWayPartition(int arr[],int n, int a, int b)
{
    // code here
    int low=0, high=n-1,mid=0;
    while(mid<=high)
    {
        if(arr[mid]<a)
        {
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid]>b)
        {
            swap(arr[mid],arr[high--]);
        }
        else
        {
            mid++;
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
    int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    threeWayPartition(arr, n, 10, 20);
    cout << "array after segregation ";
    printArray(arr, n);
    return 0;
}
/*Time Complexity: O(n)
Auxiliary Space: O(1) */
