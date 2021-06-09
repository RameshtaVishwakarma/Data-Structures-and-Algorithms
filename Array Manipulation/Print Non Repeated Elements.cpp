/*Hashing is very useful to keep track of the frequency of the elements in a list.

You are given an array of integers. You need to print the count of non-repeated elements in the array.

Example 1:

Input:
10
1 1 2 2 3 3 4 5 6 7

Output:
4

Explanation:
4, 5, 6 and 7 are the
elements with frequency 1 and rest
elements are repeated so the number
of non-repeated elements are 4.*/

#include<bits/stdc++.h>
using namespace std;

void printNonRepeated(int arr[],int n)
{
    unordered_map<int, int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]] == 1)
        {
           cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int arr[]={1, 1, 2, 2, 3, 3, 4, 5, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printNonRepeated(arr,n);
    return 0;
}
