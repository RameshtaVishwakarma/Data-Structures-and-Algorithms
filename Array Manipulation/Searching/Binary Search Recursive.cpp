#include<bits/stdc++.h>
using namespace std;

/* Approach: The approach to solving the problem is to divide the problems into sub-problem
-Divide into smaller Problem
-Find Pattern
-Find the base case
-Have a Leap of faith in recursion
-Solve for bigger problem.
*/

int binarySearch(int arr[], int low, int high, int x)
{
    //Base Case
    if(low > high)
        return -1;

    int mid = (low+high)/2;
    if(arr[mid] == x)
        return mid;
    else if(arr[mid] > x)
        return binarySearch(arr,low,mid-1,x);
    else
        return binarySearch(arr,mid+1,high,x);
}

//Time Complexity: O(logn) Space Complexity: O(logn)

int main()
{
    int arr[] = {5,3,9,7,1,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,0,n-1,7)<<endl;
}
