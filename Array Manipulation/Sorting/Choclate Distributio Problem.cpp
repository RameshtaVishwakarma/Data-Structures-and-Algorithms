/*Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a
variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.
Example:
Input:
N = 8, M = 5
A = {3, 4, 1, 9, 56, 7, 9, 12}
Output: 6
Explanation: The minimum difference between
maximum chocolates and minimum chocolates
is 9 - 3 = 6 by choosing following M packets :
{3, 4, 9, 7, 9}.
Our approach is to sort the array and make a window of size M and iterate over the array while keeping a track of minimum difference*/

#include<bits/stdc++.h>
using namespace std;

int minimumDifference(int arr[], int n, int m)
{
    sort(arr,arr+n);
    if(m>n)
        return -1;
    int ans=INT_MAX;
    for(int i=0;(i+m-1)<n;i++)
    {
        ans=min(ans,arr[i+m-1]-arr[i]);
    }
    return ans;
}

//Driver code
int main()
{
    int arr[]={3, 4, 1, 9, 56, 7, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m=5;
    cout << "Minimum difference is "<<minimumDifference(arr,n,m);
    return 0;
}

