/*
Given an array of distinct elements, find previous greater element for every element. If previous greater element does not exist, print -1.
Examples:
Input : arr[] = {10, 4, 2, 20, 40, 12, 30}
Output :         -1, 10, 4, -1, -1, 40, 40

Input : arr[] = {10, 20, 30, 40}
Output :        -1, -1, -1, -1

Input : arr[] = {40, 30, 20, 10}
Output :        -1, 40, 30, 20
The problem is similar as Next greater Element refer to understand the logic behind this*/

#include<bits/stdc++.h>
using namespace std;

vector<int> previousGreaterElement(int arr[], int n)
{
    //arr[] = {15, 10, 18, 12, 4, 6, 2, 8}
    vector<int> result;
    stack<int> s;
    s.push(arr[0]);
    result.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && arr[i]>=s.top())
        {
            s.pop();
        }
        s.empty()? result.push_back(-1): result.push_back(s.top());
        s.push(arr[i]);
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
    int arr[]={15, 10, 18, 12, 4, 6, 2, 8};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int> res = previousGreaterElement(arr,n);
    printVector(res);
    return 0;
}
