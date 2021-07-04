/*The approach here is to make use of he logarithmic rules. Factorial is product of all the numbers from 1 to n. We have a logarithmic property which is
log(ab) = log(a) + log(b) now when we apply this log property to our factorial product this will convert the product into simple logarithmic addition from
1 to n. Now we get log(n!) there is another exponential property of log that is e^log(n) = n. so we will apply this property to get the value of n!.

 Disadvantage of array method: Too much computational power required. But as numbers become big it will be wrong to assume that multiplication takes constant
 time. The naive approach takes O(K*M) time for multiplication where K is the length of the multiplier and M is the length of the multiplicand.

 Now since an integer can only store a value as big as l*10^8 we will use string.*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

string factorial(long long n)
{
    if(n>MAX)
    {
        cout<<"Integer overflow"<<endl;
        return "";
    }

    //Base Case
    if(n==0)
    {
        return "1";
    }

    long long counter;
    long double sum =0;

    for(counter = 1; counter<=n; counter++)
    {
        sum += log(counter);
    }

    //Now since the answer would be too long we will store the result in string.

    string result = to_string(round(exp(sum)));
    return result;
}

// Driver code
int main()
{
    string str;
    str = factorial(5);
    cout << "The factorial is: "<< str << endl;
}
