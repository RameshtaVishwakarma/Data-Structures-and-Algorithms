/*Given an array of positive and negative numbers, arrange them such that all negative integers appear before all the positive integers in
the array without using any additional data structure like hash table, arrays, etc.

Examples:
Input:  [12 11 -13 -5 6 -7 5 -3 -6]
Output: [-13 -5 -7 -3 -6 12 11 6 5]*/
#include<bits/stdc++.h>
using namespace std;

void segregate(int arr[], int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<0);
        do{
            j--;
        }while(arr[j]>=0);
        if(i>=j)
        {
            break;
        }
        swap(arr[i],arr[j]);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// Driver Code
int main()
{
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    segregate(arr, n);
    printArray(arr,n);
    return 0;
}
/* Here the order of appearance isn't maintained. we need to use insertion sort or merge sort in order to maintain the stability.
time complexity O(n2) for insertion sort and O(nlog n) for merge sort. */
