/*Difficulty Level : Medium
Given an array, print the Next Smaller Element (NSE) for every element. The Smaller smaller Element for an element x is the first smaller element on the right side of x in array. Elements for which no smaller element exist (on right side), consider next smaller element as -1.
Examples:
a) For any array, rightmost element always has next smaller element as -1.
b) For an array which is sorted in increasing order, all elements have next smaller element as -1.
c) For the input array [4, 8, 5, 2, 25}, the next smaller elements for each element are as follows.

Element       NSE
   4      -->   2
   8      -->   5
   5      -->   2
   2      -->   -1
   25     -->   -1

The program is similar as next greater element for explanation please refer that.
Instead here I have stored the indices of the array elements just for change in the demonstration purpose.
*/

#include<bits/stdc++.h>
using namespace std;
//6  2  5  4  1  5  6
//1  4  3  4  -1  -1  -1

vector<int> nextSmallerElement(int arr[], int n)
{
    stack<int> s;
    vector<int> result;
    s.push(n-1);
    result.push_back(n);
    for(int i = n-2;i>=0;i--)
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
    vector<int> res = nextSmallerElement(arr,n);
    printVector(res);
    return 0;
}

