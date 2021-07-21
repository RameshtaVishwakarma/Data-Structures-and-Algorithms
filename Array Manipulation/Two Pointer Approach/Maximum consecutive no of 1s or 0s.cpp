/*Difficulty Level : Easy

Given binary array, find count of maximum number of consecutive 1’s present in the array.
Examples :


Input  : arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1}
Output : 4

Input  : arr[] = {0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1}
Output : 1 */

#include<bits/stdc++.h>
using namespace std;

//Approach 1: The approach is really strong this forces us to think out of the box as we always think of counting the element which we need but we rarely
//think of eliminating the elements which are not useful to us. Here we had only  2 elements so this method works like a charm.
int maximumConsecutive(int arr[], int n)
{
    int curr=0;
    int res=0;
    for(int counter = 0;counter<n;counter++)
    {
        if(arr[counter] != 1)
        {
            curr = 0;
        }
        else{
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}

//Time complexity: O(n) Space Complexity: O(1)

//Driver code
int main()
{
    int arr[] = {1, 1, 0, 0, 1, 0, 1, 0,
                  1, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maximumConsecutive(arr, n) << endl;
    return 0;
}
