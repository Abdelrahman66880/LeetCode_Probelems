class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int counter = 0;

        // Iterate through all possible subarrays
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j]; // Calculate sum of the subarray [i, j]
                if (sum == k) {
                    counter++; // Increment counter if sum matches k
                }
            }
        }

        return counter; // Return the total count of subarrays
    }
};
