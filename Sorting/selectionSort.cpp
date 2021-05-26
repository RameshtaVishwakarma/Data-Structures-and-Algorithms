/* selection sort is a polynomial time complexity algorithm. The basic idea is that we find out the minimum element and put it at the beginning of the array
This algorithm does minimum no of swaps and it is useful in case where we need minimum swaps to sort the array. For eg: In case of EEPROM whose memory age will
be reduced if we use too many swaps. The disadvantage of selection sort is that it is not a stable sorting algorithm, But it is an inplace sorting algorithm*/
#include<bits/stdc++.h>
using namespace std;

void swap(int *p1, int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int minimum_element=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minimum_element])
            {
                minimum_element=j;
            }
        }
        swap(&arr[i],&arr[minimum_element]);
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
    int arr[] = {99,113,78,12,34,56,150,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}
