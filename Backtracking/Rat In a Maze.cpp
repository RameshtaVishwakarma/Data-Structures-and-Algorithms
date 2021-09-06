/* Hard Problem */
#include<bits/stdc++.h>
using namespace std;

class solution
{
public:
void solve(vector<vector<int>> &m, vector<string> &result, int n, int i, int j, string res)
{
    //Base Case: Ihat is going beyond the matrix walls.
    if(i<0 || j<0 || i==n || j==n)
    {
        return;
    }
    //If the cell is blocked, then return.
    if(m[i][j] == 0)
    {
        return;
    }
    //Store the answer
    if(i==n-1 && j == n-1)
    {
        result.push_back(res);
        return;
    }
    //Once visited mark as cannot be visited again
    m[i][j] = 0;
    solve(m,result,n,i+1,j,res+"D");
    solve(m,result,n,i,j-1,res+"L");
    solve(m,result,n,i,j+1,res+"R");
    solve(m,result,n,i-1,j,res+"U");
    //Backtrack and mark as unvisited
    m[i][j] = 1;

}
vector<string> findPath(vector<vector<int>> &m, int n) {
    // Your code goes here
    vector<string> result;
    solve(m,result,n,0,0,"");
    return result;
}
};
//Time complexity : O((N^2)^4) Space Complexity : Number of recursive calls

//Driver Code:
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> m(n, vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>m[i][j];
            }
        }
        solution obj;
        vector<string> result = obj.findPath(m,n);
        if(result.size() == 0)
            cout<<"-1";
        else
            for(auto x:result)
                cout<<x<<endl;
    }
    return 0;
}
