/*Given an unsorted array of nonnegative integers, find a continuous subarray which adds to a given number.
Examples :

Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Ouptut: Sum found between indexes 2 and 4
Sum of elements between indices
2 and 4 is 20 + 3 + 10 = 33
*/

#include<bits/stdc++.h>
using namespace std;

//{1, 4, 20, 3, 10, 5}, sum = 33
// 1 5 25 28 38 .... 38-1=37 37-4=33
void subarraySum(int arr[] , int n, int x)
{
    int curr_sum=arr[0], start=0;
    for(int i=1;i<n;i++)
    {
        while(curr_sum>x && start<i-1)
        {
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum == x)
        {
            cout<<start+1<<" ";
            cout<<i;
        }
        if(i<n)
        {
            curr_sum+=arr[i];
        }
    }
}
//Time Complexity : O(n). Space Complexity: O(1).

int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subarraySum(arr, n, sum);
    return 0;
}
