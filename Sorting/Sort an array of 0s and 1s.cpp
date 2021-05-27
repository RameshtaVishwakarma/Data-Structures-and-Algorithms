/*Given a binary array, sort it using one traversal and no extra space.
Examples :
Input : 1 0 0 1 0 1 0 1 1 1 1 1 1 0 0 1 1 0 1 0 0
Output : 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1
Explanation: The output is a sorted array of 0 and 1

This is an extension of hoares partitioning algorithm and it is not stable. Linear Time complexity, Constant space complexity */
#include<bits/stdc++.h>
using namespace std;

//Approach 1 using modified hoares partitioning algorithm
void segregate(int arr[], int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]==0);
        do{
            j--;
        }while(arr[j]==1);
        if(i>=j)
        {
            break;
        }
        swap(arr[i],arr[j]);
    }
}

//Approach 2 using 2 pointer approach (Advantage: It is stable)
void segregateStable(int arr[], int n)
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==0)
        {
            swap(arr[j],arr[i++]);
        }
    }
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// Driver Code
int main()
{
    int arr[] = {0,1,1,0,0,1,0,1,0,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    segregateStable(arr, n);
    printArray(arr,n);
    return 0;
}
