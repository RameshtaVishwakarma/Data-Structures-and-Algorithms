/*Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to
all the elements to its right side. The rightmost element is always a leader.

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17
as it is greater than all the elements
to its right.  Similarly, the next
leader is 5. The right most element
is always a leader so it is also
included. */

#include<bits/stdc++.h>
using namespace std;

/*Approach: Here there is no way you can solve problem in O(n) if travel from the left side you will always end up with O(n^2) solution. Here the trick is to
make your brain think in both directions. It is stereotypical that you can traverse array in only one direction from left to right. But you can also travel it
from right to left. Which can solve your major problems which will require to check every next elements after one element.*/

void leadersOfAnArray(int arr[], int n)
{
    int curr_max=arr[n-1];
    cout<<curr_max<<endl;
    for(int counter = n-2;counter>=0;counter--)
    {
        if(arr[counter] > curr_max)
        {
            curr_max = arr[counter];
            cout<<curr_max<<endl;
        }
    }
}

//Driver Code
int main() {
      int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;
      leadersOfAnArray(arr, n);
      return 0;
}
