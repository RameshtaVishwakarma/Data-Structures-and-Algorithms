/*Given three sorted arrays A, B and C of size N, M and P respectively. The task is to merge them into a single array which must be sorted in
increasing order.
Example:
Input:
N = 4, A[] = [1 2 3 4]
M = 5, B[] = [1 2 3 4 5]
P = 6, C[] = [1 2 3 4 5 6]
Output: 1 1 1 2 2 2 3 3 3 4 4 4 5 5 6
Explanation: Merging these three sorted
arrays, we have:
1 1 1 2 2 2 3 3 3 4 4 4 5 5 6. */

#include <bits/stdc++.h>
using namespace std;
vector<int> mergeThree(vector<int>& a, vector<int>& b, vector<int>& c)
{
    //Your code here
    //Grow your thinking approach your program smartly here we need to find a minimum
    //between three arrays and push into our vector
    int i=0,j=0,k=0,x,y,z,d;
    int l=a.size(), m=b.size(), n=c.size();
    vector<int> result;
    while(i<l || j<m || k<n)
    {
        if(i<l)
        {
            x=a[i];
        }
        else{
            x=INT_MAX;
        }
        if(j<m)
        {
                y=b[j];
        }else{
            y=INT_MAX;
        }
        if(k<n)
        {
                z=c[k];
        }else
        {
            z=INT_MAX;
        }
        d=min(min(x,y),z);
        result.push_back(d);
        if(i<l && d==a[i]){i++;}
        else if(j<m &&  d==b[j]){j++;}
        else k++;
    }
    return result;
}
void printVector(vector<int> a)
{
    for (auto e : a) {
        cout << e << " ";
    }
}
// Driver Code
int main()
{
    vector<int>A= { 1, 2, 41, 52, 84 };
    vector<int>B = { 1, 2, 41, 52, 67 };
    vector<int>C = { 1, 2, 41, 52, 67, 85 };
    // Print Result
    printVector(mergeThree(A, B, C));
    return 0;
}
