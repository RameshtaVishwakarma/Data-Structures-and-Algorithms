/*Merge sort is a sorting algorithm which follows the divide and conquer approach to sort the array. It is a stable sorting algorithm and can handle
duplicates ore repetition of an element while sorting. For the value of n we will have log2n+1 levels (refer the notes for proof) and it will require
O(n) auxiliary space.  Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.
T(n) = 2T(n/2) + θ(n) hence after solving the time complexity would be O(nlogn)*/

#include<bits/stdc++.h>
using namespace std;

//This functions simultaneously sorts the array and combines them.
void mergeArray(int arr[], int low, int mid, int high)
{
    int n1=(mid-low+1),n2=(high-mid);
    //This creation of temporary array at every step causes a linear space complexity. We can use delete[] to free the memory as a recusion call is over.
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){left[i]=arr[low+i];}
    for(int j=0;j<n2;j++){right[j]=arr[mid+j+1];}
    //k is low since value of low changes with the recusrsion call and we need to keep the array consistent. 
    int i=0,j=0,k=low; 
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else{
            arr[k++]=right[j++];
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
}

void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;//returns recursively
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    mergeArray(arr,l,m,r);
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={4, 1, 3, 9, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    printArray(arr,n);
}
