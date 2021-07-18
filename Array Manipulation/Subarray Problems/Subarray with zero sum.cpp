/*Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
Example 1:
Input:
5
4 2 -3 1 6

Output:
Yes

Explanation:
2, -3, 1 is the subarray
with sum 0.*/

#include<bits/stdc++.h>
using namespace std;

//Approach 1: Naive method. Time Complexity:O(n2) Space Complexity:O(1)
bool subArrayExists(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                return true;
            }
        }
    }
    return false;
}

/* Approach 2: We will use the prefix sum technique here along with hash map, The prefix_sum will store  the sum of elements till a particular iterative
index. Simultaneously we will keep a check of prefix sum in the hash set. If we found a prefix sum which exist in the hast set before that means we have a
subarray with zero sum.
Time Complexity: O(n) Space Complexity: O(1)*/

bool subArrayExists(int arr[], int n)
{
    unordered_set<int> s;
    int prefix_sum=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        if(s.find(prefix_sum) != s.end() || prefix_sum == 0)
        {
            return true;
        }
        else
        {
            s.insert(prefix_sum);
        }
    }
    return false;
}


// Driver code
int main()
{
    int arr[] = { -3, 2, 3, 1, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (subArrayExists(arr, n))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}
