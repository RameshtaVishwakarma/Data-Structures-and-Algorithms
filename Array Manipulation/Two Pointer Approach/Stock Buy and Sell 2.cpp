/*
Difficult Level: East
You are given an array prices where prices[i] is the price of a given stock on the ith day.
Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3. */

#include<bits/stdc++.h>
using namespace std;

//Approach: The approach is to find the lowest and the peak points and add the difference of every such points. This will give us the maximum profit.Here we
// are exploiting the fact that the sum would add up to the difference of least minimum point and highest value point
int maxProfit(int arr[], int n)
{
    int profit=0;
    for(int counter = 1;counter<n;counter++)
    {
        if(arr[counter] > arr[counter-1])
        {
            profit+=(arr[counter]-arr[counter-1]);
        }
    }
    return profit;
}

//Time Complexity: O(n) Space Complexity: O(1)

//Driver code
int main()
{
    int arr[]={1,5,3,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxProfit(arr,n)<<endl;
    return 0;
}
