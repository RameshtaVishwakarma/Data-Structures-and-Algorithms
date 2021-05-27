/*Given an unsorted array, find the minimum difference between any pair in given array.
Example:
Input: nums = [2, 4, 5, 9, 7]
Output: 1
Explanation: Difference between 5 and 4 is 1.
Approach 1: Use two for loops and keep a track of minimum difference. Time complexity:Polynomial
Approach 2: sort the array and traverse to find the difference. Time complexity:Linear*/

#include<bits/stdc++.h>
using namespace std;

int  minimum_difference(int arr[], int n)
{
    sort(arr,arr+n);
    int ans=INT_MAX;
    for(int i=1;i<n;i++)
    {
        ans=min(ans,arr[i]-arr[i-1]);
    }
    return ans;
}

// Driver code
int main()
{
   int arr[] = {1, 5, 3, 19, 18, 25};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout << "Minimum difference is " << minimum_difference(arr, n);
   return 0;
}
/*Time Compelxity: O(N* log(N))
Space Complexity: O(1) */
