/*
Difficulty Level : Medium
Given an array of integers, find the nearest smaller number for every element such that the smaller element is on left side.

Examples:

Input:  arr[] = {1, 6, 4, 10, 2, 5}
Output:         {_, 1, 1,  4, 1, 2}
First element ('1') has no element on left side. For 6,
there is only one smaller element on left side '1'.
For 10, there are three smaller elements on left side (1,
6 and 4), nearest among the three elements is 4.

Input: arr[] = {1, 3, 0, 2, 5}
Output:        {_, 1, _, 0, 2}
*/

#include<bits/stdc++.h>
using namespace std;
//-1 -1 2  2 -1  1  5
//6  2  5  4  1  5  6
//-1 -1 1  1 -1  4  5

vector<int> previousSmallestElement(int arr[], int n)
{
    vector<int> result;
    stack<int> s;
    s.push(0);
    result.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && arr[i]<=arr[s.top()])
        {
            s.pop();
        }
        int span = s.empty()?-1:s.top();
        result.push_back(span);
        s.push(i);
    }
    return result;
}

//Time complexity: O(n) Space complexity : O(n)

//Function to print the vector
void printVector(vector<int> v)
{
    for(auto x:v)
    {
        cout<<x<<endl;
    }
}

//Driver code
int main()
{
    int arr[]={6,2,5,4,1,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int> res = previousSmallestElement(arr,n);
    printVector(res);
    return 0;
}

