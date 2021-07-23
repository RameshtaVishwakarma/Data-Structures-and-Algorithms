/*Difficult : Easy
Given an array A of N elements. Find the majority element in the array.
A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Example 1:

Input:
N = 5
A[] = {3,1,3,3,2}
Output:
3
Explanation:
Since, 3 is present more than N/2 times, so it is the majority element.
 */

#include<bits/stdc++.h>
using namespace std;

//Approach 1: The normal brute force approach to solve the problem
int majorityElement(int arr[], int n)
{
    //Declaring a counter variable
    int count = 0;
    //Iterating over the array using brute force.
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        //Satisfying the condition
        if(count > n/2)
        {
            return arr[i];
        }
    }
    return -1;
}
//Time Complexity: O(1). Auxiliary Space: O(1)

/*Approach 2: Moores voting algorithm:
Algorithm:
-> Loop through each element and maintains a count of majority element, and a majority index, maj_index
-> If the next element is same then increment the count if the next element is not same then decrement the count.
-> if the count reaches 0 then changes the maj_index to the current element and set the count again to 1.
-> Now again traverse through the array and find the count of majority element found.
-> If the count is greater than half the size of the array, print the element
-> Else print that there is no majority element*/

int majorityElement(int arr[], int n)
{
    //Case 1:
    int count = 1, res = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[res] == arr[i])
        {
            count++;
        }else{
            count--;
        }
        if(count == 0)
        {
            count = 1;
            res = i;
        }
    }
    //Case 2:
    count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == arr[res])
        {
            count++;
        }
    }
    return (count<=n/2)?-1:arr[res];
}

//Time Complexity: O(n). Auxiliary Space: O(1).

int main()
{
    int a[] = { 1, 3, 3, 1, 2 };
    int size = (sizeof(a)) / sizeof(a[0]);
    // Function calling
    cout<<majorityElement(a, size)<<endl;
    return 0;
}
