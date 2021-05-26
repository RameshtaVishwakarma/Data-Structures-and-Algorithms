/*
Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0,
but if the array is sorted in the reverse order, the inversion count is the maximum.Formally speaking, two elements a[i] and a[j] form an inversion
if a[i] > a[j] and i < j Time Complexity: O(n log n), The algorithm used is divide and conquer, So in each level, one full array traversal is needed,
and there are log n levels, so the time complexity is O(n log n).
Space Complexity: O(n), Temporary array.*/

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
	    /*This step makes the algorithm differ from the merge sort function here we count
	      the number of elements greater than the current element in the right portion of the
	      array. This code is effcient because logically every element to the right of a greater
	      element would definetly be greater as the array is sorted.*/
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
