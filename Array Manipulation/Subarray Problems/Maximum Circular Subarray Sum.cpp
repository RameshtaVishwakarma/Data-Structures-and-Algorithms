#include<bits/stdc++.h>
using namespace std;

//Approach 1: The approach is to calculate every subarray sum including the circular ones an find the maximum. The method is not the most efficient.
int maximumCircularSubarray(int arr[], int n)
{
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j=1;j<n;j++)
        {
            int index=(i+j)%n;
            curr_sum+=arr[index];
            curr_max = max(curr_max,curr_sum);
        }
        res = max(res, curr_max);
    }
    return res;
}
//TIme Complexity: O(n^2) Space complexity:O(1)

//Approach 2: The trick is to calculate the sum of circular subarray and then check which has the maximum sum normal subarray or the circular subarray.
//To calculate the sum of circular subarray we would use the trick that we would subtract the minimum subarray sum from the sum of the whole array elements

//Kadane's Algorithm to calculate min and max subarray sum.
int kadanes(int arr[], int n)
{
    int max_here = 0;
    int max_sofar = INT_MIN;

    for(int i=0;i<n;i++)
    {
        max_here+=arr[i];
        max_sofar = max(max_here,max_sofar);
        if(max_here < 0)
        {
            max_here = 0;
        }
    }
    return max_sofar;
}

int maximumCircularSubarray(int arr[], int n)
{
    //Maximum subarray sum.
    int max_sum = kadanes(arr,n);
    //Edge case:
    if(max_sum<0)
    {
        return max_sum;
    }
    int arr_sum=0;
    //Now we will flip the sign of every element in the array and apply kadanes this will give us the minimum subarray sum.
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    //Minimum subarray sum. Since the value will turn out to be negative we add the sum.
    int min_sum = kadanes(arr,n);
    arr_sum += min_sum;
    return (max(max_sum,arr_sum));
}

//Time Complexity: O(n) Space Complexity: O(1)

//Driver Code
int main() {

     int arr[] = {8, -4, 3, -5, 4}, n = 5;
     cout<<maximumCircularSubarray(arr, n);
     return 0;
}
