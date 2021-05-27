/*Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
Example 1:
Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in
the array sums up to 13.
Approach 1: The naive approach would be to run three nested for loops and check for every pair if it is equal to x return true else return false.*/

#include <bits/stdc++.h>
using namespace std;

//Naive Approach Time Complexity: O(n3), Auxiliary Space: O(1)
bool find3Numbers(int arr[], int n, int x)
{
    int l, r;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    cout << "Triplet is " << arr[i] <<
                        ", " << arr[j] << ", " << arr[k];
                    return true;
                }
            }
        }
    }
    return false;
}

/*This efficient approach uses the two-pointer technique. Traverse the array and fix the first element of the triplet.
Now use the Two Pointers algorithm to find if there is a pair whose sum is equal to x – array[i]. Two pointers algorithm take linear time*/
bool find3Numbers(int arr[], int n, int x)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int j=i+1,k=n-1;
        while(k>j)
        {
            int sum = arr[i]+arr[j]+arr[k];
            if(sum == x)
            {
                cout << "Triplet is " << arr[i] <<", " << arr[j] << ", " << arr[k];
                return true;
            }
            else if(sum > x)
            {
                k-=1;
            }
            else if(sum < x)
            {
                j+=1;
            }
    }
}
return false;
}
//Time complexity: O(N^2) Auxiliary Space: O(1)

/* Driver code */
int main()
{
    int arr[] = { 1, 4, 45, 6, 10, 8 };
    int x = 22;
    int n = sizeof(arr) / sizeof(arr[0]);
    find3Numbers(arr, n, x);
    return 0;
}
