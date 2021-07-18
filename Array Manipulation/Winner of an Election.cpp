/*Given an array of names (consisting of lowercase characters) of candidates in an election. A candidate name in array represents a vote casted to the
candidate. Print the name of candidate that received Max votes. If there is tie, print lexicographically smaller name.
Example 1:

Input:
n = 13
Votes[] = {john,johnny,jackie,johnny,john
jackie,jamie,jamie,john,johnny,jamie,
johnny,john}
Output: john 4
Explanation: john has 4 votes casted for
him, but so does johny. john is
lexicographically smaller, so we print
john and the votes he received.

Difficulty Level : Easy*/

#include<bits/stdc++.h>
using namespace std;
//The approach would be to maintain a frequency map and print the maximum votes and candidate name in one traversal instead of two. Very simple focus on the
//problem. Time Complexity:O(n) Space complexity:O(n)
void winner(string arr[], int n)
{
    unordered_map<string,int> m;
    int maximum_votes=0;
    string candidate;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
        if(maximum_votes < m[arr[i]])
        {
            maximum_votes=m[arr[i]];
            candidate=arr[i];
        }
        if(maximum_votes == m[arr[i]])
        {
            candidate=min(candidate,arr[i]);
        }
    }
    cout<<candidate<<" ";
    cout<<maximum_votes<<endl;
}

 // Driver code
int main()
{
    string arr[] = { "john", "johnny", "jackie",
                        "johnny", "john", "jackie",
                        "jamie", "jamie", "john",
                        "johnny", "jamie", "johnny",
                        "john" };
    int n=sizeof(arr)/sizeof(arr[0]);
    winner(arr,n);
    return 0;
}
