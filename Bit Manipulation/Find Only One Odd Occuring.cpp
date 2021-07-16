/*Given an array of N positive integers where all numbers occur even number of times except one number which occurs odd number of times. Find the exceptional number.
Example 1:

Input:
N = 7
Arr[] = {1, 2, 3, 2, 3, 1, 3}
Output: 3 */
#include<bits/stdc++.h>
using namespace std;

int exceptionallyOdd(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res ^= arr[i];
    }
    return res;
}

//Time Complexity: O(N)
//Auxiliary Space: O(1)

int main()
{
    int arr[]={1,2,2,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<exceptionallyOdd(arr,n)<<endl;
    return 0;
}
