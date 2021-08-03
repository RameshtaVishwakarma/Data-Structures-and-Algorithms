/* Difficulty Level: Easy*/

#include<bits/stdc++.h>
using namespace std;

//function to check precedence of the operators.
int precedence(char a)
{
    if(a == '^')
        return 3;
    else if(a=='*' || a=='/')
        return 2;
    else if(a=='+' || a=='-')
        return 1;
    else
        return -1;
}

//Conversion of infix to postfix
string infixToPostfix(string str)
{
    //Given a string which is postfix convert to prefix.
    stack<char> s;
    //String to store a result
    string result="";
    //Iterating over the string
    for(int i=0;i<str.length();i++)
    {
        char c = str[i];
        //If an operand then push in the stack
        if((c>='a' && c<='z')|| (c>='0' && c<='9') || (c>='A' && c<='Z'))
            result+=c;
        //If a parenthesis then push
        else if(c == '(')
            s.push('(');
        //Encountered closing brace that means a sub expression has been evaluated so pop the items from the stack
        else if(c == ')')
        {
            while(s.top() != '(')
            {
                result+=s.top();
                s.pop();
            }
            //another pop to remove '('
            s.pop();
        }
        //If an operator then check precedence.
        else
        {
            while(!s.empty() && precedence(str[i])<=precedence(s.top()))
            {
                result+=s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    //Removing the leftover items from the stack
    while(!s.empty())
    {
        result+=s.top();
        s.pop();
    }
    return result;
}
/*Observations: The observation in the question is that we always keep the operator with highest precedence on the top as when we began to
pop these operators are the first to be popped. And this is what a postfix expression is. This can be also thought of this way that
we can keep a track of min and max items refer NSE,PSE,NGE,PGE.
*/
//Time Complexity : O(n) Space complexity: O(n)
int main()
{
    string infixexp = "a+b*(c^d-e)^(f+g*h)-i";
    cout<<infixToPostfix(infixexp)<<endl;
    return 0;
}
//OP: abcd^e-fgh*+^*+i-
