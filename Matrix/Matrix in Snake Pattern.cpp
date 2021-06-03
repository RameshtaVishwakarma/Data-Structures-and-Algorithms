/*Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.
matrix[][] = {{45, 48, 54},
             {21, 89, 87}
             {70, 78, 15}}
Output: 45 48 54 87 89 21 70 78 15
Explanation:
Matrix is as below:
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to
the output as 45 48 54 87 89 21 70 78 15. */

#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> snakePattern(int *arr[], int m, int n)
{
    vector<int> result;
    for(int i=0;i<m;i++)
    {
        if(i%2 == 0)
        {
            for(int j=0;j<n;j++)
            {
                result.push_back(arr[i][j]);
            }
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                result.push_back(arr[i][j]);
            }
        }
    }
    return result;
}

void printMatrix(vector<int> print)
{
    for(int i: print)
    {
        cout<<i<<" ";
    }
}

//Driver Code
int main()
{
    vector<int> print;
    int **arr,m,n;
    cin>>m;
    cin>>n;
    arr=new int *[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
	print=snakePattern(arr,m,n);
	printMatrix(print);
    return 0;
}
