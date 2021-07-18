/*Given an array containing N integers and an integer K., Your task is to find the length of the longest Sub-Array with the sum of the elements equal
to the given value K.
Example 1:

Input :
A[] = {10, 5, 2, 7, 1, 9}
K = 15
Output : 4
Explanation:
The sub-array is {5, 2, 7, 1}.*/
#include<bits/stdc++.h>
using namespace std;
//Approach 1: using Naive Approach Time complexity:O(n2), Space Complexity:O(1)
int longestSubaaray(int arr[], int n, int k)
{
    int length=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                length=max(length,(j-i+1));
            }
        }
    }
    return length;
}
//Approach 2: Using the prefix sum method we will use a map to store the index of the occurrence of element.
int longestSubaaray(int arr[], int n, int sum)
{
    int prefix_sum=0,length=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        if(prefix_sum == sum)
        {
            length=i+1;
        }
        if(m.find(prefix_sum-sum) == m.end())
        {
            m[prefix_sum]=i;
        }
        if(m.find(prefix_sum-sum) != m.end())
        {
            length=max(length,(i-m[prefix_sum]));
        }
    }
    return length;
}

// Driver Code
int main()
{
    int arr[] = {-5, 8, -14, 2, 4, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = -5;
    cout << "Length = "
         << longestSubaaray(arr, n, k);
    return 0;
}
