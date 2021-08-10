/*Given an array of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of
two elements are same, then smaller number comes first.
Example 1:

Input:
N = 5
A[] = {5,5,4,6,4}
Output: 4 4 5 5 6
Explanation: The highest frequency here is
2. Both 5 and 4 have that frequency. Now
since the frequencies are same then
smaller element comes first. So 4 4 comes
first then comes 5 5. Finally comes 6.
The output is 4 4 5 5 6. */
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> &p1, pair<int,int> &p2)
{
    if(p1.second == p2.second)
    {
        return p1.first < p2.first;
    }else
    {
        return p1.second>p2.second;
    }
}
void sortByFreq(int arr[],int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    int sizeOfMap=m.size();
    //Creating a pair of map size
    pair<int,int> p[sizeOfMap];
    int i=0;
    //Inserting map elements in pair
    for(auto it=m.begin(); it!=m.end(); ++it)
    {
        p[i++]=make_pair(it->first,it->second);
    }
    sort(p,p+sizeOfMap,compare);
    for(int i=0;i<sizeOfMap;i++)
    {
        int freq=p[i].second;
        while(freq--)
        {
            cout<<p[i].first<<" ";
        }
    }
}
int main()
{
    int arr[] = {5,5,4,6,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    sortByFreq(arr, n);
    return 0;
}
