class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max = nums[0];
        int min = nums[0];
        for (int num : nums) {
            if (num > max) max = num;
            if (num < min) min = num;
        }
        return (long long)k * (max - min);
    }
};