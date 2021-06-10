/*Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.

Example 1:

Input:
N = 6, X = 16
Arr[] = {1, 4, 45, 6, 10, 8}
Output: Yes
Explanation: Arr[3] + Arr[4] = 6 + 10 = 16 */

#include<bits/stdc++.h>
using namespace std;

//Approach 1: using sorting and two pointer technique.
bool sumExists(int arr[], int n, int sum)
{
  sort(arr,arr+n);
  int i=0,j=n-1;
  while(j>i)
  {
    int x=arr[i]+arr[j];
    if(x == sum)
    {
        return true;
    }
    else if(x<sum)
    {
        i++;
    }
    else if(x>sum)
    {
        j--;
    }
  }
  return false;
}
//Time Complexity: O(nlogn) Space Complexity: O(1)

//Approach 2: using Hashing
bool sumExists(int arr[], int n, int sum)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum - arr[i]) != s.end())
        {
            return true;
        }
        else{
            s.insert(arr[i]);
        }
    }
    return false;
}
//Time Complexity:O(n) Space Complexity:O(n)

/* Driver program to test above function */
int main()
{
    int A[] = { 1, 4, 45, 6, 10, -8 };
    int n = 16;
    int arr_size = sizeof(A) / sizeof(A[0]);
    // Function calling
    if (sumExists(A, arr_size, n))
        cout << "Sum Present";
    else
        cout << "sum Absent";
    return 0;
}
