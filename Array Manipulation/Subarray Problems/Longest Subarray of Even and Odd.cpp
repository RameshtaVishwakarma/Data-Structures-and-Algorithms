/*You are given an array of size n. Find the maximum possible length of a subarray such that its elements are arranged alternately either as even and
odd or odd and even.
Example 1:
Input:
n = 5
a[] = {10,12,14,7,8}
Output: 3
Explanation: The max length of subarray
is 3 and the subarray is {14 7 8}. Here
the array starts as an even element and
has odd and even elements alternately. */
#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[], int n)
{
    int count=1,length=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]%2==0 && arr[i]%2!=0 || arr[i-1]%2!=0 && arr[i]%2==0)
        {
            count++;
        }
        else{
            count=1;
        }
        length=max(length,count);
    }
    return length;
}
int main()
{
    int arr[]={4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxEvenOdd(arr,n);
}
