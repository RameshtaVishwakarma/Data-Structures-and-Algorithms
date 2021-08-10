/*Counting sort is a linear time sorting algorithm that sort in O(n+k) time when elements are in the range from 1 to k.
What if the elements are in the range from 1 to n2?
We can’t use counting sort because counting sort will take O(n2) which is worse than comparison-based sorting algorithms. Can we sort such an array in
linear time? Radix Sort is the answer. The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit.
Radix sort uses counting sort as a subroutine to sort.

The Radix Sort Algorithm
Do following for each digit i where i varies from least significant digit to the most significant digit.
Sort input array using counting sort (or any stable sort) according to the i’th digit.
Example:

Original, unsorted list:
170, 45, 75, 90, 802, 24, 2, 66

Sorting by least significant digit (1s place) gives:
[*Notice that we keep 802 before 2, because 802 occurred
before 2 in the original list, and similarly for pairs
170 & 90 and 45 & 75.]

170, 90, 802, 2, 24, 45, 75, 66

Sorting by next digit (10s place) gives:
[*Notice that 802 again comes before 2 as 802 comes before
2 in the previous list.]

802, 2, 24, 45, 66, 170, 75, 90

Sorting by the most significant digit (100s place) gives:
2, 24, 45, 66, 75, 90, 170, 802 */

#include<bits/stdc++.h>
using namespace std;
//For positive Integers only.
void countingSort(int arr[], int n, int exp)
{
    int output[n];
    int count[10] = { 0 };
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixSort(int arr[], int n)
{
    int mx=*max_element(arr,arr+n);
    for(int exp=1;(mx/exp)>0;exp*=10)
    {
        countingSort(arr,n,exp);
    }
}
int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
// Time complexity: O(d*(n*k)) where k = depends upon base Space Complexity=O(n+k)
