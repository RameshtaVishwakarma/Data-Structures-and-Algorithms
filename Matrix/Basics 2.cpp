/* Passing Matrix in a function. If we wish to do this we need can pass matrix directly to the function but the default parameter c++ takes as rows and column
is 3 and 2, so we cannot pass more than this. Eventually we can pass rows as a parameter since compiler is smart enough to understand the first parameter so
we can make use of this fact. Another way is to use double pointer*/

#include<bits/stdc++.h>
using namespace std;
//Using basic parsing
void printMatrix(int arr[][2], int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}
int main()
{
    int arr[6][2];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr[i][j]=10;
        }
    }
    printMatrix(arr,6);
    return 0;
}

Using double pointer
void printMatrix(int **arr, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}
int main()
{
    int **arr,m,n;
    cin>>m;
    cin>>n;
    arr=new int *[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=10;
        }
    }
    printMatrix(arr,m,n);
    return 0;
}

//Using only pointer array
void printMatrix(int *arr[], int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    int *arr[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=10;
        }
    }
    printMatrix(arr,m,n);
    return 0;
}

//Using array of vectors
void print(vector<int> arr[], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{
	int m = 3, n = 2;
	vector<int> arr[m];
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			arr[i].push_back(i);
		}
	}
	print(arr, m);
	return 0;
}

//using vectors of vectors
void print(vector<vector<int>> arr)
{
	for(int i = 0; i < arr.size(); i++)
	{
		for(int	j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{
	int m = 3, n = 2;
	vector<vector<int>> arr;
	for(int i = 0; i < m; i++)
	{
		vector<int> v;
		for(int j = 0; j < n; j++)
		{
			v.push_back(i);
		}
		arr.push_back(v);
	}
	print(arr);
	return 0;
}
