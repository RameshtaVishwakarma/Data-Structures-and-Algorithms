/* Difficulty Level: Easy*/

#include<bits/stdc++.h>
using namespace std;

int evaluatePrefix(string str)
{
    stack<int> s;
    //Iterating over the string
    for(int i=str.length()-1;i>=0;i--)
    {
        //Push the operand.
        if(str[i]>='0' && str[i]<='9')
        {
            s.push(str[i]-'0');
        }
        else
        {
            //Popping the top 2 digits from the stack to do the respective operations on them.
            int n1= s.top();
            s.pop();
            int n2 = s.top();
            s.pop();
            if(str[i] == '*')
            {
                s.push(n1*n2);
            }
            else if(str[i] == '/')
            {
                s.push(n2/n1);
            }
            else if(str[i] == '+')
            {
                s.push(n1+n2);
            }
            else if(str[i] == '-')
            {
                s.push(n2-n1);
            }
        }
    }
    return s.top();
}
//Time Complexity : O(n) Space Complexity : O(n)

int main()
{
    string exprsn = "+9*26";
    cout << evaluatePrefix(exprsn) << endl;
    return 0;
}
