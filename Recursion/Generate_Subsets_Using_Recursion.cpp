/*Given a set of positive integers, find all its subsets. The set can contain duplicate elements, so any repeated subset should be considered only once in
the output.
Examples:
Input:  S = {1, 2, 2}
Output:  {}, {1}, {2}, {1, 2}, {2, 2}, {1, 2, 2}

Approach: The approach to solving the problem is to divide the problems into sub-problem
-Divide into smaller Problem
-Find Pattern
-Find the base case
-Have a Leap of faith in recursion
-Solve for bigger problem.

Here we would try to include a character or not include the character. If we include a character then we will again try to include another character or
exclude that character. This hint is enough. Try solving for smaller input like A then AB. Make a recursion graph.*/
#include<bits/stdc++.h>
using namespace std;

void generateSubsets(string s, string curr, int i)
{
    //Base case: when we get the required string, since we are starting from 0 string.
    if(i == s.length())
    {
        cout<<curr<<endl;
        return;
    }
    //The curr is to keep a track of which string we are currently considering, and in future recursive call how would we append another character to that
    //string
    generateSubsets(s,curr,i+1);
    generateSubsets(s,curr+s[i],i+1);
}

int main()
{
    string str = "ABC";
    string curr = "";
    generateSubsets(str,curr,0);
    return 0;
}
