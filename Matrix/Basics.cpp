/*A matrix is a two dimensional array. It is represented using curly brackets within curly brackets depending upon the dimension of matrix.
The elements in the matrix are stored inside the compiler same as to how the array elements are stored. i.e in contagious manner. It can be
stored row wise or column wise depending upon the language. In c++ The matrix is stored in row-major order.For eg:
int arr[3][2]={{10,20},
               {30,40},
                {50,60}}
INTERNAL CURLY BRACES AND MULTILINE ARE OPTIONAL.
In row major format: 10 20 30 40 50 60 address: 200 2004 2004....
In column major format 10 30 50 20 40 60
If you don't want to initialize the no of rows, compiler is smart to figure that out on its own. But its important to define the columns size then.
*/
#include<bits/stdc++.h>
using namespace std;

//Simple matrix Declaration
int main()
{
    int m=3,n=2;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=i+j;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}

/*Matrix Declaration using array of pointers. Allocated on Heap
Advantages: we can create rows of different size, can take dimensions as parameters.
Disadvantage: Not cache friendly */
int main()
{
    int **arr;
    int m=3,n=2;
    arr = new int*[m]; //For storing size of rows i.e column
    for(int i=0;i<m;i++)
        arr[i]=new int[n];//allocating address of n in m pointer array
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=9;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}

//Matrix Declaration using array of pointers. Stored in stack.
int main()
{
    int m=3,n=2;
    int *arr[m];// Array of pointers. Earlier we had a pointer arr which was pointing to the defined array of pointers.
    for(int i=0;i<m;i++)
        arr[i]=new int[n];//allocating address of n in m pointer array
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=9;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}
/* Array of Vectors.
Advantages: we can create different size rows. Easy to pass as functions.
Disadvantages: Not cache friendly, m vectors are created and these m vectors internally create n size array. */
int main()
{
	int m = 3, n = 2;
	vector<int> arr[m];
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			arr[i].push_back(10);
		}
	}

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}
//Matrix Defined by Vectors of vectors.
int main()
{
	int m = 3, n = 2;
	vector<vector<int>> arr;
	for(int i = 0; i < m; i++)
	{
		vector<int> v;
		for(int j = 0; j < n; j++)
		{
			v.push_back(10);
		}
		arr.push_back(v);
	}
	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j] << " ";
		}
	}
	return 0;
}

