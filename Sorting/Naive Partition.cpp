/* The pivot selection and soring the elements according to the pivot is very crucial for quicksort algorithm as it determines the time and space complexity
of the algorithm. We can select pivot and partition around it in various ways. This is naive partition in quickSort which requires extra auxiliary space
O(n) and time complexity is O(n). The advantages of this partitioning algorithm is that it is stable. The disadvantage of this algorithm is that it uses 
extra space and requires three traversals which is not feasible*/

#include<bits/stdc++.h>
using namespace std;

void naivePartitioning(int arr[], int low, int high, int pivot)
{
    int temp[high-low+1],index=0;
    //Copies all the elements less than pivot in the temporary array
    for(int i=low;i<=high;i++)
    {
        if(arr[i]<=arr[pivot])
        {
             temp[index]=arr[i];
             index++;
        }
    }
    //Copies all the element greater than pivot in the temporary array.
    for(int i=low;i<=high;i++)
    {
        if(arr[i]>arr[pivot])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={5,13,6,9,12,11,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    naivePartitioning(arr,0,n-1,n-1);
    printArray(arr,n);
    return 0;
}
