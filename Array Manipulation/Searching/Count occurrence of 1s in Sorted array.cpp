#include<bits/stdc++.h>
using namespace std;

int countOfOnes(int arr[], int n)
{
    int low = 0, high = n-1;
    while(high >= low)
    {
        int mid = (low+high)/2;
        if(arr[mid] == 0)
        {
            low = mid + 1;
        }
        else{
            if(mid == 0 || arr[mid - 1]!= arr[mid])
            {
                return (n-mid);
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}
//Time Complexity : O(logn) Time Complexity:O(1)

int main()
{
    int arr[]={1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<countOfOnes(arr,n)<<endl;
    return 0;
}
