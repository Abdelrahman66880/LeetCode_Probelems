class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        double reversed_int = 0;
        double tmp = x;
        while(x > 0)
        {
            reversed_int = (x % 10) + (reversed_int * 10);
            x /= 10;
        }
        if(tmp == reversed_int)
        {
            return true;
        }
        return false;
        
    }
};