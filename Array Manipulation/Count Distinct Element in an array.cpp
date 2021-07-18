/*Given an unsorted array, count all distinct elements in it.
Examples:


Input :   arr[] = {10, 20, 20, 10, 30, 10}
Output : 3
There are three distinct elements 10, 20 and 30.

Input :   arr[] = {10, 20, 20, 10, 20}
Output : 2

Difficulty Level : Easy
*/

#include<bits/stdc++.h>
using namespace std;

//Approach 1: Naive approach
int countDistinctElements(int arr[], int n)
{
    int count=0;
    bool flag;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
            }
        }
        if(flag==false)
        {
            count++;
        }
    }
    return count;
}
//Time complexity:O(n2) space complexity O(1)

//Approach 2: To sort the array
int countDistinctElements(int arr[], int n)
{
    sort(arr,arr+n);
    int count =0;
    for(int i=1;i<n;i++)
    {
        while(arr[i]==arr[i-1] && i<n)
        {
            i++;
        }
        count++;
    }
    return count;
}
//Time complexity:O(nlogn) space complexity O(1)

//Approach 3: using sets i.e hashing
int countDistinctElements(int arr[], int n)
{
    unordered_set<int> s(arr,arr+n);
    return s.size();
}
//Time complexity:O(n) space complexity O(n)

int main()
{
    int arr[] = { 12, 10, 9, 45, 2, 10, 10, 45 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<countDistinctElements(arr,size);
    return 0;
}
