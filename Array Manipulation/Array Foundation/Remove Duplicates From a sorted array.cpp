/*Difficulty Level : Easy
Given a sorted array, the task is to remove the duplicate elements from the array.
Examples:


Input  : arr[] = {2, 2, 2, 2, 2}
Output : arr[] = {2}
         new size = 1

Input  : arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}
Output : arr[] = {1, 2, 3, 4, 5}
         new size = 5
These types of questions are the foundation to think in terms of two pointer approach. It is very basic you can do this!!!*/

#include<bits/stdc++.h>
using namespace std;

/*Approach: The approach is to exploit the fact that the array is sorted. We can replace the next duplicate of array with the next occurring unique element
in the array This way we can skip the duplicate elements which will also decrease the size of the array. The function will return the new size of the container.*/

int removeDuplicates(int arr[],int n){
    // 1 2 2 3 3 4 4 4
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res-1]!=arr[i]) // arr[0]!=arr[1] i.e 1!=2 //2
        {
            arr[res]=arr[i]; //arr[1]=ar[1] i.e2=2
            res++;
        }
    }
    return res;
}

//Time Complexity : O(n)
//Auxiliary Space : O(1)

// Driver code
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // removeDuplicates() returns new size of
    // array.
    n = removeDuplicates(arr, n);
    // Print updated array
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
