/*Difficulty Level : Easy

Given an array of random numbers, Push all the zero’s of a given array to the end of the array. For example, if the given arrays is
{1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be same.
Expected time complexity is O(n) and extra space is O(1).

Example:

Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0};

Input : arr[]  = {1, 2, 0, 0, 0, 3, 6};
Output : arr[] = {1, 2, 3, 6, 0, 0, 0};*/

#include<bits/stdc++.h>
using namespace std;

//Approach: the approach is to keep a track of elements which are non zero and swap it with every non zero element. This will move all the zeroes to the end.
void moveAllZeroesToEnd(int arr[], int n)
{
    //This helps to keep a track of non zero elements
    int count = 0;
    for(int counter = 0;counter<n;counter++)
    {
        if(arr[counter]!=0)
        {
            swap(arr[counter],arr[count++]);
        }
    }
}

//function to print the array
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

//Driver code
int main()
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveAllZeroesToEnd(arr, n);
    cout << "Array after pushing all zeros to end of array :\n";
    printArray(arr,n);
    return 0;
}
