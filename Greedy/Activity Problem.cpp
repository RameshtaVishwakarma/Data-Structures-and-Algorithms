#include<bits/stdc++.h>
using namespace std;

/*Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a
single person, assuming that a person can only work on a single activity at a given day.
Note : Duration of the activity includes both starting and ending day.
Example 1:

Input:
N = 4
start[] = {1, 3, 2, 5}
end[] = {2, 4, 3, 6}
Output:
3
Explanation:
A person can perform activities 1, 2
and 4.

Approach : The approach is to be greedy. We will need to pick up the meeting which is scheduled first then according to the end of that meeting we would pick
the other meetings on that same day. These approach would require to sort the timing given according to the meeting end time after that iterate to find out the
no of meetings possible.*/

int activitySelection(int start[], int end[], int n)
{
    //make a pair of the array given.
    vector<pair<int,int>> meetings;
    for(int i=0;i<n;i++)
    {
        meetings.push_back({end[i],start[i]});
    }

    sort(meetings.begin(),meetings.end());

    //Initialize the ending time of first meeting as the buffer wait time.
    int buffer = meetings[0].first;
    int count = 1;

    //Since first meeting is already started
    for(int i=1;i<n;i++)
    {
        if(meetings[i].second > buffer)
        {
            count++;
            buffer = meetings[i].second;
        }
    }
    return count;
}
/*
Time Complexity : O(N * Log(N))
Auxilliary Space : O(N)
*/

//Driver code

int main()
{
    int s[] = {1, 3, 2, 5};
    int f[] = {2, 4, 3, 6};
    int n = sizeof(s)/sizeof(s[0]);
    cout<<activitySelection(s, f, n)<<endl;
    return 0;
}
