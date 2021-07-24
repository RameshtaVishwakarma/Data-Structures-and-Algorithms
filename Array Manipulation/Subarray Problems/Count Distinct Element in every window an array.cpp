/*Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.
Example 1:

Input:
N = 7, K = 4
A[] = {1,2,1,3,4,2,3}
Output: 3 4 4 3
Explanation: Window 1 of size k = 4 is
1 2 1 3. Number of distinct elements in
this window are 3.
Window 2 of size k = 4 is 2 1 3 4. Number
of distinct elements in this window are 4.
Window 3 of size k = 4 is 1 3 4 2. Number
of distinct elements in this window are 4.
Window 4 of size k = 4 is 3 4 2 3. Number
of distinct elements in this window are 3.

Difficulty Level : Medium*/

#include<bits/stdc++.h>
using namespace std;


vector<int> countDistinct(int arr[], int n, int k)
{
    vector<int> result;
    unordered_map<int,int> m;
    for(int i=0;i<k;i++)
    {
        m[arr[i]]++;
    }
    result.push_back(m.size());
    for(int i=k;i<n;i++)
    {
        m[arr[i-k]]--;
        if(m[arr[i-k]] == 0)
        {
            m.erase(arr[i-k]);
        }
        m[arr[i]]++;
        result.push_back(m.size());
    }
    return result;
}
void printVector(vector<int> vec)
{
    for(auto i: vec)
    {
        cout<<i<<" ";
    }
}
int main()
{
    vector<int> res;
    int arr[] = { 1, 2, 1, 3, 4, 2, 3 }, k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    res=countDistinct(arr, n, k);
    printVector(res);
    return 0;
}
