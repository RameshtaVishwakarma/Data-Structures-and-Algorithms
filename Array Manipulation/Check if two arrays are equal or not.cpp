/*Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain
same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Example 1:
Input:
N = 5
A[] = {1,2,5,4,0}
B[] = {2,4,5,0,1}
Output: 1
Explanation: Both the array can be
rearranged to {0,1,2,4,5} */

#include<bits/stdc++.h>
using namespace std;

//Approach 1: To sort the elements
bool areEqual(int arr1[], int arr2[], int n, int m)
{
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]!=arr2[j])
        {
            return false;
        }
        i++;j++;
    }
    return true;
}
//Time complexity O(m+n)logn(m+n) Space complexity:O(1)

//Approach 2: To use unordered map
bool areEqual(int arr1[], int arr2[], int n, int m)
{

    unordered_map<int, int> m1;
    for(int i=0;i<n;i++)
    {
        m1[arr1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        m1[arr2[i]]--;
    }
    for(auto i:m1)
    {
        if(i.second!=0)
        {
            return false;
        }
    }
    return true;
}
//Time complexity: O(n) space Complexity: O(n)

int main()
{
    int arr1[] = { 3, 5, 2, 5, 2 };
    int arr2[] = { 2, 3, 5, 5, 2 };
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);
    if (areEqual(arr1, arr2, n, m))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
