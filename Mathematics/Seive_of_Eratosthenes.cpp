/*Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number.

Example:
Input : n =10
Output : 2 3 5 7

Input : n = 20
Output: 2 3 5 7 11 13 17 19
The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so */

#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n)
{
    //We will make a temporary boolean array of size n.
    vector<bool> isPrime(n+1, true);

    //Now we will traverse through the array and mark the multiples of every number as false. One optimization here is to traverse only till sqrt(n) as if we
    //have n = 25 then even if we traverse till 5 we would marks every multiple present of 2,3,5. The next step would be directly 7 as 6 is also a multiple of
    // 2 & 3. Its all about numbers.
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j+=i)//Optimization 2: start from i*i. for eg if we consider 5 every multiple of 5 before 25 would be marked by 2 & 3.
            {
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            cout<<i<<endl;
        }
    }
}
//Time Complexity:

//Driver Code
int main()
{
    int n=35;
    sieveOfEratosthenes(n);
    return 0;
}
