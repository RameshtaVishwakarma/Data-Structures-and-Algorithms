/* Lomuto partition is another way of partitioning the pivot apart from hoares and naive partition. The lomuto partition segregates the array in one linear
search and O(1) auxiliary space. We consider the pivot to be our last element while using the lomuto partition. The advantages and disadvantages of Lomuto
partition are discussed in the hoares partition*/

#include<bits/stdc++.h>
using namespace std;
//Pivot is always the last element of the array.
void lomutoPartition(int arr[], int low, int high, int pivot)
{
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=arr[pivot])
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[pivot]);
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
    int arr[] = {10,80,30,90,40,50,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    lomutoPartition(arr, 0,n-1,n-1);
    printArray(arr,n);
    return 0;
}
