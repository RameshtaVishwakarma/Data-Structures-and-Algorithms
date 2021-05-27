/* Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array.
It is given that all array elements are distinct.
Example:
Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7

One naive solution would be to sort the array and return item at position k-1. The other solution is to use the quick Select algorithm which is a variation
of quick sort. The idea is, not to do complete quicksort, but stop at the point where pivot itself is k’th smallest element. Also, not to recur for both
left and right sides of pivot, but recur for one of them according to the position of pivot. The worst case time complexity of this method is O(n2),
but it works in O(n) on average.*/


#include<bits/stdc++.h>
using namespace std;
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int lomutoPartition(int arr[], int low, int high)
{
    int pivot=arr[high],i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
// We use the random partition to avoid the worst case
int randomPartition(int arr[], int l, int r)
{
    int n = r-l+1;
    int pivot = rand() % n;
    swap1(&arr[l + pivot], &arr[r]);
    return lomutoPartition(arr, l, r);
}

int kthSmallestElement(int arr[], int low, int high, int k)
{
    while(low<=high)
    {
        int p=randomPartition(arr,low,high);
        if(p==(k-1))
        {
            return arr[p];
        }
        else if(p>(k-1))
        {
            p=high-1;
        }
        else if(p<(k-1))
        {
            low=p+1;
        }
    }
    return -1;
}
// Driver program to test above methods
int main()
{
    int arr[] = {7,10,4,3,20,15 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 3;
    cout << "K'th smallest element is " << kthSmallestElement(arr, 0, n - 1, k);
    return 0;
}

