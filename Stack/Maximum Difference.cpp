/*
Difficulty Level : Medium
Given array A[] of integers, the task is to complete the function findMaxDiff which finds the maximum absolute difference between nearest left and
right smaller element of every element in array.If the element is the leftmost element, nearest smaller element on left side is considered as 0.
Similarly if the element is the rightmost elements, smaller element on right side is considered as 0.
Examples:

Input : arr[] = {2, 1, 8}
Output : 1
Left smaller  LS[] {0, 0, 1}
Right smaller RS[] {1, 0, 0}
Maximum Diff of abs(LS[i] - RS[i]) = 1

Input  : arr[] = {2, 4, 8, 7, 7, 9, 3}
Output : 4
Left smaller   LS[] = {0, 2, 4, 4, 4, 7, 2}
Right smaller  RS[] = {0, 3, 7, 3, 3, 3, 0}
Maximum Diff of abs(LS[i] - RS[i]) = 7 - 3 = 4

Input : arr[] = {5, 1, 9, 2, 5, 1, 7}
Output : 1
*/

#include<bits/stdc++.h>
using namespace std;

//Approach: The approach is simple if you have the knowledge of stack. As the question suggest we would need to find the previous and next smaller element.
void previousSmaller(vector<int> &a1, int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);
    a1.push_back(0);
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && arr[i]<=s.top())
        {
            s.pop();
        }
        int span = s.empty()? 0:s.top();
        a1.push_back(span);
        s.push(arr[i]);
    }
}

void nextSmaller(vector<int> &a2, int arr[], int n)
{
    stack<int> s;
    s.push(arr[n-1]);
    a2.push_back(0);
    for(int i = n-2;i>=0;i--)
    {
        while(!s.empty() && arr[i]<=s.top())
        {
            s.pop();
        }
        int span = s.empty()?0:s.top();
        a2.insert(a2.begin(),span);
        s.push(arr[i]);
    }
}

int findMaxDiff(int arr[], int n)
{
    //Your code here
    vector<int> a1;
    vector<int> a2;

    previousSmaller(a1,arr,n);
    nextSmaller(a2,arr,n);

    int result=INT_MIN;
    for(int i=0;i<n;i++)
    {
        result = max(result,abs(a1[i]-a2[i]));
    }
    return result;
}
//Time Complexity : O(n) Space Complexity : O(n)

//Driver codec
int main()
{
    int arr[]={2, 4, 8, 7, 7, 9, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findMaxDiff(arr,n)<<endl;
    return 0;
}
