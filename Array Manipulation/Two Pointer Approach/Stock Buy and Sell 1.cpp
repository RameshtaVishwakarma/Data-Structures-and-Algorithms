/*
Difficulty Level : Easy
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell. */

#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int n)
{
    //The logic is pretty simple as we only have to written the maximum profit we can make within given number of days. This is related to Largest Sum
    //Contiguous Subarray. we will use kadanes algorithm.
    int profit = 0, minValue = arr[0];
    for(int i=1;i<n;i++)
    {
        profit = max(profit,(arr[i]-minValue));
        minValue = min(arr[i],minValue);
    }
    return profit;
}

//Time Complexity: O(n) Space Complexity:O(1)

int main()
{
    int prices[] = {7,6,4,3,1};
    int n = sizeof(prices)/sizeof(prices[0]);
    cout<<maxProfit(prices,n)<<endl;
    return 0;
}
