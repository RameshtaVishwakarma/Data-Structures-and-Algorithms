#include<bits/stdc++.h>
using namespace std;

bool issafe(int row, int col, vector<string> &board)
{
    //checking whether the left row is safe or not
    for(int i=0;i<col;i++)
    {
        if(board[row][i] == 'Q')
            return false;
    }

    //checking upper diagonal
    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j] == 'Q')
            return false;
    }
    //Checking for lower diagonal
    for(int i=row,j=col;i<board.size() && j>=0;i++,j--)
    {
        if(board[i][j] == 'Q')
            return false;
    }

    return true;
}

void solve(int col,vector<string> &board,vector<vector<string>> &result)
{
    //Base case:
    if(col == board.size())
    {
        result.push_back(board);
        return;
    }
    for(int row=0;row<board.size();row++)
    {
        if(issafe(row,col,board))
        {
            board[row][col] = 'Q';
            solve(col+1,board,result);
            board[row][col] ='.';
        }
    }
}

vector<vector<string>> nqueen(int n)
{
    vector<vector<string>> result;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
        board[i] = s;
    }
    solve(0,board,result);
    return result;
}


int main()
{
    int n = 4;
    vector<vector<string>> ans;
    ans = nqueen(n);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
