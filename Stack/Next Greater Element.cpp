/* Difficulty Level : Medium
For an array, the rightmost element always has the next greater element as -1.
For an array that is sorted in decreasing order, all elements have the next greater element as -1.
For the input array [4, 5, 2, 25], the next greater elements for each element are as follows.
Element       NGE
   4      -->   5
   5      -->   25
   2      -->   25
   25     -->   -1
*/

#include<bits/stdc++.h>
using namespace std;
//1 3 2 4
//3 3 4 -1
vector<int> nextGreaterElement(int arr[], int n)
{
    //Creating a vector array to store the results
    vector<int> result;
    stack<int> s;

    //Since the last element would never have a greater to its right push -1.
    result.push_back(-1);

    //We start from the last element as the intuition suggests.
    s.push(arr[n-1]);

    //Traversing the array.
    for(int i=n-2;i>=0;i--)
    {
        //If found a new greater element then pop remaining elements of the stack as this is the new greater.
        while(!s.empty() && arr[i]>=s.top())
        {
            s.pop();
        }

        //Check whether item at this index has any larger element in the right.
        int span = s.empty() ? -1:s.top();
        result.push_back(span);

        //Add the item to the stack
        s.push(arr[i]);
    }
    reverse(result.begin(),result.end());
    return result;
}

//Time complexity: O(n) Space complexity : O(n)

//Function to print the vector
void printVector(vector<int> v)
{
    for(auto x:v)
    {
        cout<<x<<endl;
    }
}

//Driver code
int main()
{
    int arr[]={11, 13, 21, 3};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int> res = nextGreaterElement(arr,n);
    printVector(res);
    return 0;
}
/*This program return the largest element and not the index. We can modify this by replacing the element with indexes in result array.  */
