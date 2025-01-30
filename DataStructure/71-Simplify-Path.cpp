#include <stack>
#include <string>
class Solution {
public:
    string simplifyPath(string path) {
        stack <string> st;
        string result;
        for (int i = 0; i < path.size(); i++)
        {
            if(path[i] == '/')
            {
                continue;
            }
            string tmp;
            while(path[i] != '\\0' && path[i] != '/')
            {
                tmp += path[i++];
            }
            if(tmp == \.\)
            {
                continue;
            }else if (tmp == \..\)
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }else{
                st.push(tmp);
            }
        }

        while(!st.empty())
        {
            result = \/\ + st.top() + result;
            st.pop();
        }
        if(result.size() == 0)
        {
            result = '/';
        }
        return result;

    }
};