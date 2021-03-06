#include<bits/stdc++.h>
using namespace std;

/*bubble sort is a simple sorting algorithm that takes input as an array and return the sorted array in order of n^2 time complexity
This algorithm compares every next element in an array until it is at its correct position. hence no of swaps is (n-1)+(n-2)+...+n
It is an inplace and a stable sorting algorithm. Bubble sort takes minimum time (Order of n) when elements are already sorted.
O(n*n). Worst case occurs when array is reverse sorted.*/

void swap(int *p1, int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j+1],&arr[j]);
        }
    }
}
// more optimized version
void bubbleSortOptimized(int arr[], int n)
{
    /*boolean value to keep a track of the swapped variable, if at any given point a variable isnt swapped that means the array
    ahead is sorted*/
    bool swapped=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j+1],&arr[j]);
                swapped=true;
        }
        if(swapped==false)
            break;
    }
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {12,10,64,84,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSortOptimized(arr, n);
    printArray(arr,n);
    return 0;
}
