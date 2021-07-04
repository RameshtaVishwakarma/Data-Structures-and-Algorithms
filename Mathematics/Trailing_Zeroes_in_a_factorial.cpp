#include<bits/stdc++.h>
using namespace std;

/*The approach to solve this problem is to find the pattern in the occurrence of zero in the end of a number. Now we get zero in end of a number when we
encounter either 2 or 5. Now tracking 2 would be difficult as number can be large. But tracking the number of 5 would be really easy. So we will track the
multiples of 5. The number of multiples of 5 would be our answer.
Take for eg: 5! = 120 Now it has only one occurrence of 5.
10! = 3628800 it has 2 occurrence of 5 which is 10 & 5.*/

int countTrailingZeroes(int n)
{
    //Base case
    if(n<0)
    {
        return -1;
    }
    int count = 0;
    //Here we do i*5 as for every multiple of 5 like 25. we would have a new 5 occurrence
    for(int i=5;n/i>=1;i*=5)
    {
        count += n/i;
    }
    return count;
}
//Time complexity:

int main()
{
    int n = 100;
    cout<<countTrailingZeroes(n)<<endl;
    return 0;
}
