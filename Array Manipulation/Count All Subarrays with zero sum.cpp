/*You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.

Example 1:

Input:
n = 6
arr[] = {0,0,5,5,0,0}
Output: 6
Explanation: The 6 subarrays are
[0], [0], [0], [0], [0,0], and [0,0]. */

#include<bits/stdc++.h>
using namespace std;

//Approach 1: Naive method. Time Complexity:O(n2) Space Complexity:O(1)
int findSubArrays(int arr[], int n)
{
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                count++;
            }
        }
    }
    return count;
}

//Approach 2: Same as prefix sum. But here we will use map to store the frequency of the count. Time Complexity: O(n) Space Complexity: O(1)
int findSubArrays(int arr[], int n)
{
    unordered_map<int, int> m;
    //We create a count variable to store the frequency and prefix_sum to store the prefix_sum
    int count=0,prefix_sum=0;
    m[0]=1;
    //Iterating over the map
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        if(m.find(prefix_sum) != m.end())
        {
            count+=m[prefix_sum];
            m[prefix_sum]++;
        }
        else{
            m[prefix_sum]++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findSubArrays(arr, n);
    return 0;
}
