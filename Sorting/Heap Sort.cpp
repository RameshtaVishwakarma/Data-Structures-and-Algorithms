/*Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to selection sort where we first find
the minimum element and place the minimum element at the beginning. We repeat the same process for the remaining elements.
Heap sort is an in-place algorithm.
Its typical implementation is not stable.

Time Complexity: Time complexity of heapify is O(Logn). Time complexity of createAndBuildHeap() is O(n) and the overall time complexity of Heap Sort is
O(nLogn). space complexity is O(1).*/
#include<bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[], int n, int rootNode)
{
    //Follow the assumptions of a binary tree.
    int largest=rootNode, left=2*rootNode+1, right=2*rootNode+2;
    if(left<n && arr[left]>arr[largest]){largest=left;}
    if(right<n && arr[right]>arr[largest]){largest=right;}
    if(largest!=rootNode)
    {
        //This step makes the root the larger element.
        swap(arr[largest],arr[rootNode]);
        //recursively call for the heapify function
        maxHeapify(arr,n,largest);
    }

}
void heapSort(int arr[], int n)
{
    //We run this loop only to find the first largest element.
    for(int i=n/2 - 1 ; i>=0 ; i-- )
        maxHeapify(arr,n,i);
    //This loop will run linearly and call the heapify function to find the rest of the largest element per iteration and swap them
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);
    cout << "Sorted array is \n";
    printArray(arr, n);
    return 0;
}
