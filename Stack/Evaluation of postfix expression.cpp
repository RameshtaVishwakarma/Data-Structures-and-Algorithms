/* Difficulty Level: Easy*/

#include<bits/stdc++.h>
using namespace std;

int solvePostfix(string str)
{
    stack<int> s;
    //Iterating over the loop
    for(int i=0;i<str.length();i++)
    {
        //Push in the stack if operand
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
    string postfixexp = "231*+9-";
    cout<<solvePostfix(postfixexp)<<endl;
    return 0;
}
