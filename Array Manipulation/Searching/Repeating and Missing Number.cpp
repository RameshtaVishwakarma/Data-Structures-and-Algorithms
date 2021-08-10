#include<bits/stdc++.h>
using namespace std;

/*Approach 1: Array Manipulation wherein we marked all the visited nodes as present within the array itself by making the position at arr[arr[i]]th element
negative. This is a very common approach which eliminates the need for extra space. although this approach won't work for negative elements.*/
void repeatingAndMissing(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])-1] > 0)
        {
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        }
        else
        {
            //This element is the repeating element.
            cout<<(i+1)<<endl;
        }
    }
    for(int i = 0;i<n;i++)
    {
        if(arr[i] > 0)
        {
            //This element is the missing element
            cout<<(i+1)<<endl;
        }
    }
}
//Time Complexity : O(1) space complexity : O(1)
/*Other approaches could be to maintain a hashmap with the help of a map or use a temporary array.*/

//Driver Code
int main()
{
    int arr[] = {1,3,4,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    repeatingAndMissing(arr,n);
    return 0;
}
