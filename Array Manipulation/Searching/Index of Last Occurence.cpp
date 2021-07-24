//So Fucking Easy problem. If you can't get your minds over this problem you are a fucking loser. Am i being too harsh no? you fuckin idiot
/*
Difficulty Level : Easy
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.
Examples:

Input : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5

Input : arr[] = {1, 3, 5, 5, 5, 5, 7, 123, 125 }
        x = 7
Output : First Occurrence = 6
         Last Occurrence = 6*/

#include<bits/stdc++.h>
using namespace std;

//Approach : We can use linear search but there is no point in solving this problem then. The optimized way is to use binary search. The problem is self
//explanatory

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
            if(mid == n-1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}
//Time Complexity: O(logn) Space Complexity: O(1)

//Driver Code
int main()
{
    int arr[] = {5, 10, 10, 10, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<firstIndex(arr,n,10)<<endl;
    return 0;
}
