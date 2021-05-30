/* Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values
(kind of hashing). Then doing some arithmetic to calculate the position of each object in the output sequence.Points to be noted:
1. Counting sort is efficient if the range of input data is not significantly greater than the number of objects to be sorted.
Consider the situation where the input sequence is between range 1 to 10K and the data is 10, 5, 10K, 5K.
2. It is not a comparison based sorting. It running time complexity is O(n) with space proportional to the range of data.
3. It is often used as a sub-routine to another sorting algorithm like radix sort.
4. Counting sort uses a partial hashing to count the occurrence of the data object in O(1).
5. Counting sort can be extended to work for negative inputs also.*/

#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n, int k)
{
    int count[k]={0};
    //Calculating the count array
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    //Calculating the prefix sum of the count array
    for(int i=1;i<k;i++)
    {
        count[i]+=count[i-1];
    }
    int output[n];
    //Fill in the output array using prefixsum and orignal array;
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
}
//count sort for negative integers
void countSort(int arr[],int n)
{
    //We first find the range of the elements present in the given array.
    int mx=*max_element(arr,arr+n);
    int mn=*min_element(arr,arr+n);
    int range=mx-mn+1;
    //This will ensure us to store the negative integers within the positive range of the array.
    int count[range]={0},output[n];
    for(int i=0;i<n;i++)
    {
        count[arr[i]-mn]++;
    }
    //Calculating the prefix sum
    for (int i = 1; i < range; i++)
        count[i] += count[i - 1];
    //Calculating the output array.
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]-mn]-1]=arr[i];
        count[arr[i]-mn]--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
}
// Driver  code
int main()
{
    int arr[] = {1,4,-1,-2,-7,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    countSort(arr,n);
    return 0;
}
/*Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
Auxiliary Space: O(n+k)*/
