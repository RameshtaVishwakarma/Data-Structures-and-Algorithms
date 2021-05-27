/* Same as kthsmallest element just a slight change in logic*/
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
    // We find  the element at n-k position
    int rank=(high-low+1)-k;
    while(low<=high)
    {
        int p=randomPartition(arr,low,high);
        if(p==(rank))
        {
            return arr[p];
        }
        else if(p>(rank))
        {
            p=high-1;
        }
        else if(p<(rank))
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
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th smallest element is " << kthSmallestElement(arr, 0, n - 1, k);
    return 0;
}
