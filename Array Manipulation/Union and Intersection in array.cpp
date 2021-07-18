/*Given two sorted arrays, find their union and intersection.
Example:

Input : arr1[] = {1, 3, 4, 5, 7}
        arr2[] = {2, 3, 5, 6}
Output : Union : {1, 2, 3, 4, 5, 6, 7}
         Intersection : {3, 5}

 Difficulty Level : Easy*/


#include<bits/stdc++.h>
using namespace std;

int NumberofElementsInIntersection(int arr[], int brr[], int n, int m )
{
    int count=0;
    unordered_set<int> s(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        if(s.find(brr[i])!=s.end())
        {
            count++;
            s.erase(brr[i]);
        }
    }
    return count;
}

int NumberofElementsInUnion(int arr[], int brr[], int n, int m )
{
    int count=0;
    unordered_set<int> s(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        s.insert(brr[i]);
    }
    return s.size();
}

int main()
{
    int arr[] = {1,2,3,4,3,3,5,6};
    int brr[] = {3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(brr[0]);
    cout<<NumberofElementsInIntersection(arr, brr, n ,m);
    cout<<NumberofElementsInUnion(arr, brr, n, m);
    return 0;
}
// Time Complexity:O(n), Space Complexity O(n)
