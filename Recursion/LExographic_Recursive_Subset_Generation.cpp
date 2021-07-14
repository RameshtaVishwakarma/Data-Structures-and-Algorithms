/*You are given a string. You need to print the lexicographically sorted power-set of the string.
Note: The string s contains lowercase letter of alphabet.
Example 1:

Input:
s = a
Output: a
Explanation: empty string and a
are only sets.

Approach: The approach to solving the problem is to divide the problems into sub-problem
-Divide into smaller Problem
-Find Pattern
-Find the base case
-Have a Leap of faith in recursion
-Solve for bigger problem.

The problem is same as generate subsets, the only difference here is that we need our elements to be in the sorted manner. Here once we push back element after
reaching the base case, the elements would be push back in sorted manner.*/

#include<bits/stdc++.h>
using namespace std;

void subset(string s, string curr, int i, vector<string> &ans)
{
    if(i == s.length())
    {
        ans.push_back(curr);
        return;
    }
    //Pass by reference to avoid making multiple copies.
    subset(s,curr,i+1,ans);
    subset(s,curr+s[i],i+1,ans);
}
//Time Complexity: O(2^|s|).
//Auxiliary Space: O(|s|).

int main()
{
    vector<string> v;
    subset("ABC","",0,v);
    sort(v.begin(),v.end());
    for(auto x : v)
    {
        cout<<x<<endl;
    }
    return 0;
}
