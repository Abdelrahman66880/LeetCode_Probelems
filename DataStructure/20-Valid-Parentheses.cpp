#include <stack>
class Solution {
public:
    stack<int> Stack;
    bool isValid(string s) {
        for (int i = 0; s[i] != '\\0'; i++)
        {
            if(Stack.empty())
            {
                Stack.push(s[i]);
            }else if((Stack.top() == '(' && s[i] == ')') || (Stack.top() == '{' && s[i] == '}') || (Stack.top() == '[' && s[i] == ']'))
            {
                Stack.pop();
            }else{
                Stack.push(s[i]);
            }
        }
        return Stack.empty();
    }
};