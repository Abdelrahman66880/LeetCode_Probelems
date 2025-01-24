class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for(int i=0; s[i] != '\0'; i++)
        {
            if(isalnum(s[i]))
            {
                filtered += tolower(s[i]);
            }
        }

        int length = filtered.size() - 1;
        int front = 0;
        int rear = length;
        while(front < rear)
        {
            if(filtered[front] != filtered[rear])
            {
                return false;
            }
            front++;
            rear--;
        }
        return true;
    }
};