#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<string> myStack;
        string t1, t2;
        for (auto it : tokens)
        {
            if (it != "+" and it != "-" and it != "/" and it != "*")
                myStack.push(it);
            else
            {
                t1 = myStack.top();
                myStack.pop();
                t2 = myStack.top();
                myStack.pop();
                // perform 'it' operation on t1 and t2
                string t3; // the term that will be pushed back to stack
                int intT1 = stoi(t1);
                int intT2 = stoi(t2);
                int T3;
                if (it == "/")
                    T3 = intT2 / intT1;
                if (it == "*")
                    T3 = intT2 * intT1;
                if (it == "-")
                    T3 = intT2 - intT1;
                if (it == "+")
                    T3 = intT2 + intT1;
                t3 = to_string(T3);
                myStack.push(t3);
            }
        }
        return stoi(myStack.top());
    }
};