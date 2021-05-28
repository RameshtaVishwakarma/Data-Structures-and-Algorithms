/*Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so
that no train is kept waiting.Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the
same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be
used for both departure of a train and arrival of another train. In such cases, we need different platforms,

Example:
Input: n = 6
arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
Output: 3
Explanation:
Minimum 3 platforms are required to
safely arrive and depart all trains.

Approach is simple we will sort both the array this will ensure the first arrival and departure time of train in a particular day. And if within that time
frame another train comes we will simply increase the number of platforms needed. At the point where the next time frame begins i.e after departure of earlier
train.*/
#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    // Your code here
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,max_platform=1,curr=1;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        max_platform=max(max_platform,curr);
    }
    return max_platform;
}
// Driver code
int main()
{
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n);
    return 0;
}
