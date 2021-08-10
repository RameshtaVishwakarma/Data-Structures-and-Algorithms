/*Time complexity is O(n2). Despite having polynomial time complexity in the worst case it is considered fast because this is an inplace algorithm,
cache friendly, and tail recursive. Refer notes for time and space complexity analysis. */

#include<bits/stdc++.h>
using namespace std;

//Partitioning Algorithm
int lomutoPartition(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = lomutoPartition(arr, low, high);
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/*We can use a random pivot from an array and swap it according to our partitioning algorithm. This is because worst case occurs when array is reverse
sorted and in that case we don need last element as our pivot, as it will cause our array O(n2) time, instead generate a Random Pivot, swaps pivot with
end element and call the partition function. This will keep the algorithm to always run in O(nlogn) time.*/
//int partition_r(int arr[], int low, int high)
//{
//    // Generate a random number in between
//    // low .. high
//    srand(time(NULL));
//    int random = low + rand() % (high - low);
//
//    // Swap A[random] with A[high]
//    swap(arr[random], arr[high]);
//
//    return lomutoPartition(arr, low, high);
//}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {20,2,10,3,7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
