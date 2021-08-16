#include<bits/stdc++.h>
using namespace std;

/*
There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is the start time of meeting i and F[i] is finish time
of meeting i. The task is to find the maximum number of meetings that can be accommodated in the meeting room. Print all meeting numbers
Examples:

Input : s[] = {1, 3, 0, 5, 8, 5}, f[] = {2, 4, 6, 7, 9, 9}
Output : 1 2 4 5
First meeting [1, 2]
Second meeting [3, 4]
Fourth meeting [5, 7]
Fifth meeting [8, 9]

Input : s[] = {75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924},
f[] = {112960, 114515, 81825, 93424, 54316, 35533, 73383, 160252 }
Output : 6 7 1
*/

int maxMeeting(int start[], int end[], int n)
{
    // Your code here
    vector<pair<int,int>> timings;
    for(int i=0;i<n;i++)
    {
        timings.push_back({end[i],start[i]});
    }
    sort(timings.begin(),timings.end());
    int count = 1;
    int buffer = timings[0].first;

    for(int i=1;i<timings.size();i++)
    {
        if(timings[i].second > buffer)
        {
            count++;
            buffer = timings[i].first;
        }
    }
    return count;
}

/*
Time Complexity: O(N log(N))
Space Complexity : O(1)
*/

//Driver Code
int main()
{
    int s[] = { 1, 3, 0, 5, 8, 5 };
    int f[] = { 2, 4, 6, 7, 9, 9 };
    int n = sizeof(s) / sizeof(s[0]);
    cout<<maxMeeting(s, f, n)<<endl;
    return 0;
}
