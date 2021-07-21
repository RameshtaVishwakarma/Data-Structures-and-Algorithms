/*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
Example 1:

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1].
In this case, 6 units of rain water (blue section) are being trapped.

Basic Insight:
An element of the array can store water if there are higher bars on the left and right. The amount of water to be stored in every element can be found out
by finding the heights of bars on the left and right sides. The idea is to compute the amount of water that can be stored in every element of the array. */

#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[], int n)
{
	int res = 0;

	for(int i = 1; i < n - 1; i++)
	{
		int res = 0;

    	int lMax[n];
    	int rMax[n];

    	lMax[0] = arr[0];
    	for(int i = 1; i < n; i++)
    		lMax[i] = max(arr[i], lMax[i - 1]);


    	rMax[n - 1] = arr[n - 1];
    	for(int i = n - 2; i >= 0; i--)
    		rMax[i] = max(arr[i], rMax[i + 1]);

    	for(int i = 1; i < n - 1; i++)
    		res = res + (min(lMax[i], rMax[i]) - arr[i]);

    	return res;
	}
	return res;
}
//Time Complexity: O(n) Space Complexity: O(n)

/*Approach 2: In the previous solution, to find the highest bar on the left and right, array traversal is needed which reduces the efficiency of the solution.
To make this efficient one must pre-compute the highest bar on the left and right of every bar in linear time. Then use these pre-computed values to find the
amount of water in every array element.
Algorithm:
Create two arrays left and right of size n. create a variable max_ = INT_MIN.
Run one loop from start to end. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign left[i] = max_
Update max_ = INT_MIN.
Run another loop from end to start. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign right[i] = max_
Traverse the array from start to end.
The amount of water that will be stored in this column is min(a,b) – array[i],(where a = left[i] and b = right[i]) add this value to total amount of water stored
Print the total amount of water stored. */

int trapRainWater(int height[], int n)
{
        //Deifining the left max and right max building levels which will help to  calculate the lowest size of the building.
        int leftMax = 0;
        int rightMax = 0;

        //Initializing two pointers which will help us to find the water level at every instance
        int low=0, high=n-1;

        //Variable to store the amount of water stored
        int waterStored = 0;

        //Iterating over the array
        while(high>low)
        {
            if(height[low] < height[high])
            {
                if(height[low]>leftMax)
                {
                    leftMax=height[low];
                }else{
                    waterStored += (leftMax - height[low]);
                }
                low++;
            }
            else
            {
                if(height[high] > rightMax)
                {
                    rightMax = height[high];
                }
                else
                {
                    waterStored += (rightMax - height[high]);
                }
                high--;
            }
        }
        return waterStored;
}

//Time Complexity: O(n) Space Complexity: O(1)

//Driver code
int main()
{
    int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum water that can be accumulated is "
         << getWater(arr, n);
    return 0;
}
