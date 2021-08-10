/*Merge sort is a sorting algorithm which follows the divide and conquer approach to sort the array. It is a stable sorting algorithm and can handle
duplicates ore repetition of an element while sorting. For the value of n we will have log2n+1 levels (refer the notes for proof) and it will require
O(n) auxiliary space.  Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.
T(n) = 2T(n/2) + θ(n) hence after solving the time complexity would be O(nlogn)*/

#include<bits/stdc++.h>
using namespace std;

int countAndMerge(int arr[], int low, int mid, int high)
{
    int n1=(mid-low+1), n2=(high-mid);
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){left[i]=arr[low+i];}
    for(int j=0;j<n2;j++){right[j]=arr[mid+j+1];}
    int i=0,j=0,k=low,res=0;
    while(i<n1 &&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else{
            arr[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }
    return res;
}

int countInv(int arr[], int l, int r)
{
    int res = 0;
    if (l<r) {
        int m = (r + l) / 2;
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);
        res += countAndMerge(arr, l, m , r);
    }
    return res;
}

int main() {
    int arr[]={2,4,1,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<countInv(arr,0,n-1);
}
