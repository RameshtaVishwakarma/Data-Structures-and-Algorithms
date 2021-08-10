#include<bits/stdc++.h>
using namespace std;

void swap(int *p1, int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j+1],&arr[j]);
                swapped=true;
        }
        if(swapped==false)
        {
            break;
        }
    }
}

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int minimum_element=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minimum_element])
                minimum_element=j;
        }
        swap(&arr[minimum_element],&arr[i]);
    }
}

void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
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
    int arr[] = {12,10,64,84,2,1,100,45,62};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr,n);
    return 0;
}
