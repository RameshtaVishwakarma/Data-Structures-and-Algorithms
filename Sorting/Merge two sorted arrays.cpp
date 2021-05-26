/* This is the simple version of merging two sorted arrays. This problem is the basic building block to the merge sort function and is quite naive.
For eg: I/P: arr1[]={10,15,10} arr2[]={5,6,6,15} 0/P: 5 6 6 10 15 20. This problem requires only 1 traversal and is linear in space and time complexity*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void mergeTwoSortedArrays(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i++]<<" ";
        }
        else
        {
            cout<<arr2[j++]<<" ";
        }
    }
        while(i<m)
        {
            cout<<arr1[i++];
        }
        while(j<n)
        {
            cout<<arr2[j++];
        }
}

//void printVector(vector<int> v)
//{
//    for(int i:v)
//        cout<<i<<" ";
//}

int main()
{
    int arr1[]={10,15,40};
    int arr2[]={5,6,6,10,15,20};
    int m=sizeof(arr1)/sizeof(arr1[0]);
	int n=sizeof(arr2)/sizeof(arr2[0]);
    mergeTwoSortedArrays(arr1,arr2,m,n);
    return 0;
}
