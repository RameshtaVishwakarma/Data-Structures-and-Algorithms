//Difficulty Level : BASIC

#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n-1;
    int mid = (low+high)/2;
    while(high>=low)
    {
        if(arr[mid] == x)
        {
            return true;
        }
        else if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return false;
}

//Time Complexity: O(logn) Space Complexity: O(1)

int main()
{
    int arr[] = {5,3,9,7,1,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(binarySearch(arr,n,7)){cout<<"Element Found"<<endl;}else{cout<<"Element not Found"<<endl;}
    return 0;
}

//Killing Strangers HAHAHAHAHAHAHA
