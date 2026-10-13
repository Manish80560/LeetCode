
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return solve(nums, 0, dp);
    }

    bool solve(vector<int>& nums, int idx, vector<int>& dp) {
        if (idx >= nums.size() - 1) {
            return true;
        }

        if (dp[idx] != -1) {
            return dp[idx];
        }

        dp[idx] = false;

        for (int i = 1; i <= nums[idx]; i++) {
            if (solve(nums, idx + i, dp)) {
                return dp[idx] = true;
            }
        }

        return dp[idx] = false;
    }
};
