//Difficulty Level : BASIC

#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

//Time Complexity: O(n) Space Complexity: O(1)

int main()
{
    int arr[] = {5,3,9,7,1,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(linearSearch(arr,n,7)){cout<<"Element Found"<<endl;}else{cout<<"Element not Found"<<endl;}
    return 0;
}

//Stupid code.
