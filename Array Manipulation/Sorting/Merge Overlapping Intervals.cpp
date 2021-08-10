/*Given a set of time intervals in any order, merge all overlapping intervals into one and output the result which should have only mutually exclusive
intervals. Let the intervals be represented as pairs of integers for simplicity.
For example, let the given set of intervals be {{1,3}, {2,4}, {5,7}, {6,8}}. The intervals {1,3} and {2,4} overlap with each other,
so they should be merged and become {1, 4}. Similarly, {5, 7} and {6, 8} should be merged and become {5, 8} */

#include<bits/stdc++.h>
using namespace std;

/*Approach 1: using structure as a pair of vectors instead, you can use this approach in interviews, instead of using stl.
Time Complexity: O(n Log n) and O(1) Extra Space.*/

struct interval{
//Declaring two member function start and end.
int s,e;
};
//Using a comparator function to custom sort the array of intervals
bool comparatorFunction(interval a, interval b)
{
    return a.s<b.s;
}
int mergeOverlappingIntervals(interval arr[], int n)
{
    //Sorting the array
    sort(arr,arr+n,comparatorFunction);
    int index=0;
    for(int i=1;i<n;i++)
    {
        //The only condition to be checked is second element of first pair is greater than first element of second pair,
        //this will ensure an overlapping interval exist.
        if(arr[index].e>=arr[i].s)
        {
            arr[index].e=max(arr[index].e,arr[i].e);
            arr[index].s=min(arr[index].s,arr[i].s);
        }
        else
        {
            index++;
            arr[index]=arr[i];
        }
    }
    return index;
}

//Approach 2: using vectors of vectors (LEETCODE)
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if(intervals.size()<=1) return intervals;
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> output;
    output.push_back(intervals[0]);
    for(int i=1; i<intervals.size(); i++) {
        if(output.back()[1] >= intervals[i][0]) output.back()[1] = max(output.back()[1] , intervals[i][1]);
        else output.push_back(intervals[i]);
    }
    return output;
}

void printInterval(interval arr[], int index)
{
    for(int i=0;i<=index;i++)
    {
        cout<<"["<<arr[i].s<<","<<arr[i].e<<"]";
    }
}

int main()
{
	interval arr[] = { {6,8}, {1,9}, {2,11}, {4,7} };
	int n = sizeof(arr)/sizeof(arr[0]);
	int index=mergeOverlappingIntervals(arr, n);
	printInterval(arr,index);
	return 0;
}
