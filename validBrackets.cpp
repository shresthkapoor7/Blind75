#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> myStack;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '{' or s[i] == '[' or s[i] == '(')
            {
                myStack.push(s[i]);
            }
            if (s[i] == '}' or s[i] == ']' or s[i] == ')')
            {
                if (myStack.empty())
                    return false;
                if (myStack.top() == '(' and s[i] == ')')
                {
                    myStack.pop();
                }
                else if (myStack.top() == '[' and s[i] == ']')
                {
                    myStack.pop();
                }
                else if (myStack.top() == '{' and s[i] == '}')
                {
                    myStack.pop();
                }
                else
                    return false;
            }
        }
        if (myStack.empty())
            return true;
        else
            return false;
    }
};

int main()
{
    Solution ob;
    // true is 1
    cout << ob.isValid("(){}}{");

    return 0;
}