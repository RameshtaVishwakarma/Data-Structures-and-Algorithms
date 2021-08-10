/* Hoare’s Partition Scheme works by initializing two indexes that start at two ends, the two indexes move toward each other until an inversion is
(A smaller value on the left side and greater value on the right side) found. When an inversion is found, two values are swapped and the process
is repeated. It requires only  single traversal of the array and has linear time complexity and O(1)space complexity */

#include<bits/stdc++.h>
using namespace std;

void hoaresPartition(int arr[], int low, int high)
{
    int i=low-1, j=high+1,pivot=arr[low];
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
            break; //return j;
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
int main()
{
    int arr[] = {5,3,8,4,2,7,1,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    hoaresPartition(arr,0,n-1);
    printArray(arr,n);
    return 0;
}
/*Hoare’s scheme is more efficient than Lomuto’s partition scheme because it does three times fewer swaps on average, and it creates efficient
partitions even when all values are equal.Like Lomuto’s partition scheme, Hoare partitioning also causes Quick sort to degrade to O(n^2) when the
input array is already sorted, it also doesn’t produce a stable sort.*/
