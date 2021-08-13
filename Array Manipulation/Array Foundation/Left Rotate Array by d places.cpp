/*Difficulty Level : Easy
Left Rotate: Array rotate by D element from left
Example:

Input:
arr[] = {1, 2, 3, 4, 5}
D = 2
Output:
3 4 5 1 2
Explanation: The initial array [1, 2, 3, 4, 5]
rotate by first index [2, 3, 4, 5, 1]
rotate by second index [3, 4, 5, 1, 2] */

#include<bits/stdc++.h>
using namespace std;

//Approach: The approach is to reverse array from 0 to d-1 then d to n lastly reversing the entire array.
void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		swap(arr[high--], arr[low++]);
	}
}

//Time complexity: O(n)
//Auxiliary Space: O(1)

void leftRotate(int arr[], int d, int n)
{
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}

//function to print the array
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

//Driver Code
int main()
{
    int arr[] = {1, 2, 3, 4, 5}, d=1;
    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotate(arr, n, d);
    cout << "Array after left rotate by one :\n";
    printArray(arr,n);
    return 0;
}
