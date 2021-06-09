/*Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and the index of its first
occurrence should be the smallest.
Example 1:

Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation:
5 is appearing twice and
its first appearence is at index 2
which is less than 3 whose first
occuring index is 3. */

#include<bits/stdc++.h>
using namespace std;

int firstRepeatingElement(int arr[], int n)
{
    unordered_map<int, int> s;
    for(int i=0;i<n;i++)
    {
        s[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(s[arr[i]]>1)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<firstRepeatingElement(arr,n);
}
//Time complexity: O(n) space Complexity: O(n)
