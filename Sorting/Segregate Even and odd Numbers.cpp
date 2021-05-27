/*Given an array of integers (both odd and even), sort them in such a way that the first part of the array contains odd numbers sorted in descending order,
rest portion contains even numbers sorted in ascending order.

Examples:
Input  : arr[] = {1, 2, 3, 5, 4, 7, 10}
Output : arr[] = {7, 5, 3, 1, 2, 4, 10}*/
#include<bits/stdc++.h>
using namespace std;

void segregate(int arr[], int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]%2!=0);
        do{
            j--;
        }while(arr[j]%2==0);
        if(i>=j)
        {
            break;
        }
        swap(arr[i],arr[j]);
    }
    	// Sort odd number in descending order
	sort(arr, arr + i, greater<int>());

	// Sort even number in ascending order
	sort(arr + i, arr + n);
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
    int arr[] = { 1, 3, 2, 7, 5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    segregate(arr, n);
    printArray(arr,n);
    return 0;
}
/*Time complexity: O(nlogn), space complexity: O(1)*/
