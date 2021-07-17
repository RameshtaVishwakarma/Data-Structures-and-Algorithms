/*Given a string S find all possible substrings of the string in lexicographically-sorted order.
Example 1:

Input : str = "abc"
Output: a ab abc ac b bc c​
Explanation : There are 7 substrings that
can be formed from abc. */

#include<bits/stdc++.h>
using namespace std;

void powerSet(string s)
{
    //We will have 2^n combination of subsets. So we would create a bit mask which represents the bits underneath the string ad print simultaneously
    int n = s.length();
    int powSize = pow(2,n);
    for(int i=0;i<powSize;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i & (1 << j)) != 0)
            {
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}
//Time complexity:(n*2^n) Space complexity:O(1)

int main()
{
    string s="ABC";
    powerSet(s);
    return 0;
}
