#include <string>
#include <stack>
#include <vector>
#include <cstdlib>  // For stoi and abs

class Solution {
public:
    std::stack<int> st;
    
    int evalRPN(std::vector<std::string>& tokens) {
        for(int i = 0; i < tokens.size(); i++) {
            if (isNumber(tokens[i])) {
                st.push(stoi(tokens[i]));
            } else {
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                if (tokens[i] == \+\) {
                    st.push(op2 + op1);
                } else if (tokens[i] == \-\) {
                    st.push(op2 - op1);
                } else if (tokens[i] == \*\) {
                    st.push(op2 * op1);
                } else if (tokens[i] == \/\) {
                    st.push(op2 / op1);
                }
            }
        }
        return st.top();
    }

private:
    bool isNumber(const std::string& token) {
        if (token[0] == '-') {
            return token.size() > 1 && std::isdigit(token[1]);
        }
        return std::isdigit(token[0]);
    }
};
