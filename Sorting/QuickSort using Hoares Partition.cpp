/*Time complexity is O(n2). Despite having polynomial time complexity in the worst case it is considered fast because this is an inplace algorithm,
cache friendly, and tail recursive. Refer notes for time and space complexity analysis. */

#include<bits/stdc++.h>
using namespace std;

//Partitioning ALgortihm
int hoaresPartition(int arr[], int low, int high)
{
    int i=low-1,j=high+1,pivot=arr[low];
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}

void quickSort(int arr[], int low, int high)
{
   if (low < high) {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = hoaresPartition(arr, low, high);
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
/*We can use a random pivot from an array and swap it according to our partitioning algorithm. This is because worst case occurs when array is reverse
sorted and in that case we don need last element as our pivot, as it will cause our array O(n2) time, instead generate a Random Pivot, swaps pivot with
first element and call the partition function. This will keep the algorithm to always run in O(nlogn) time.*/
//int partition_r(int arr[], int low, int high)
//{
//    // Generate a random number in between
//    // low .. high
//    srand(time(NULL));
//    int random = low + rand() % (high - low);
//
//    // Swap A[random] with A[high]
//    swap(arr[random], arr[low]);
//
//    return hoaresPartition(arr, low, high);
//}
int main()
{
    int arr[] = {20,2,10,3,7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
