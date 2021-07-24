/*iven a sorted array of n elements, possibly with duplicates, find the number of occurrences of the target element.
Example 1:

Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 42], target = 8
Output: 3
Example 2:

Input: arr = [3, 5, 5, 5, 5, 7, 8, 8], target = 6
Output: 0 */

//Approach: Find the first occurrence and last occurrence of the element using binary search and then count the elements.
#include<bits/stdc++.h>
using namespace std;

int firstIndex(int arr[], int n, int x)
{
    int low = 0, high = n-1;
    while(high >= low)
    {
        int mid = (low+high)/2;
        if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if(mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int lastIndex(int arr[], int n, int x)
{
    int low = 0, high = n-1;
    while(high >= low)
    {
        int mid = (low+high)/2;
        if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            if(mid == n-1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int countOccurrence(int arr[] ,int n, int x)
{
    int first = firstIndex(arr,n,x);
    if(first == -1)
        return -1;
    else
        return(lastIndex(arr,n,x)-first + 1);
}

//Time Complexities of all the program above is: O(logn) Space Complexity of both the program above is: O(1)

//Driver Code
int main()
{
   int arr[] = {10, 20, 20, 20, 40, 40};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x = 20;
   cout << countOccurrence(arr, n, x);
   return 0;
}
