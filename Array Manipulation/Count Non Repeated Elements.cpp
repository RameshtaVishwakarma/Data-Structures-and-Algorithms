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
of non-repeated elements are 4.

Difficulty Level : Basic*/

#include<bits/stdc++.h>
using namespace std;

int countNonRepeated(int arr[], int n)
{
    //Your code here
    int count = 0;
    unordered_map<int, int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    unordered_map<int, int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if((*itr).second == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[]={1, 1, 2, 2, 3, 3, 4, 5, 6, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countNonRepeated(arr,n);
}
