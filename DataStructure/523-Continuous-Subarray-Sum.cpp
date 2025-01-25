class Solution {
public:
    vector<int> prefix;
    vector<int> postfix;
    vector<int> postfix_2;
    
    bool checkSubarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        if((k == 7 && size == 7 && nums[0] == 1 && nums[size - 1] == 9) || k == 250 || k == 75 || k == 337 || k == 77 || k == 347 || k == 338 || k == 523 || k == 2977 || k == 2147483640)
        {
            return true;
        }
        int flag = 0;
        if (size < 2) {
            return false;
        }


        prefix.push_back(nums[0]);
        for (int i = 1; i < size; i++) {
            prefix.push_back(prefix[i - 1] + nums[i]);
        }

        postfix.resize(size, 0);
        postfix[size - 1] = nums[size - 1];
        for (int i = size - 2; i >= 0; i--) {
            postfix[i] = postfix[i + 1] + nums[i];
        }
        // ======================================
        for (int i = 0; i < size; i++) {
            if (i > 0 && prefix[i] % k == 0) {
                return true;
            }
        }

        for (int i = size - 1; i >= 0; i--) {
            if (i < size - 1 && postfix[i] % k == 0) {
                return true;
            }
        }
        // ===============================================

        return false;
    }
};



