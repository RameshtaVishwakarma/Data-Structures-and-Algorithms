/* Lomuto partition is another way of partitioning the pivot apart from hoares and naive partition. The lomuto partition segregates the array in one linear
search and O(1) auxiliary space. We consider the pivot to be our last element while using the lomuto partition. The advantages and disadvantages of Lomuto
partition are discussed in the hoares partition*/

#include<bits/stdc++.h>
using namespace std;
//Pivot is always the last element of the array.
void lomutoPartition(int arr[], int low, int high)
{
    int i=low-1,pivot=high;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=arr[pivot])
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    //return (i+1);
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
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    lomutoPartition(arr, 0,n-1);
    printArray(arr,n);
    return 0;
}
