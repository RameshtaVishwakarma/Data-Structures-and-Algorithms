/*Insertion sort is another polynomial sorting method which uses a concept of sorted and unsorted array window unlike bubble
sort which transfers every maximum element to the end of the array. Here we compare array elements in a particular window and
sort them simultaneously increasing the size of window with every iteration. Insertion sort takes maximum time to sort if elements
are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted. It is an inplace and stable
sorting algorithm.*/

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
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
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
