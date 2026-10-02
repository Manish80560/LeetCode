class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n == 1){
            return nums[0];
        }
        
        vector<int> dp1(n, -1);
        int ans1 = solve(nums, 0, dp1, n-2);

        vector<int> dp2(n, -1);
        int ans2 = solve(nums, 1, dp2, n-1);

        int ans = max(ans1, ans2);
        
        return ans;
        
    }

    int solve(vector<int>& nums , int idx , vector<int>& dp, int end){

        if(idx > end){
            return 0;
        }

        
        if(dp[idx] == -1){
            dp[idx] = max(nums[idx]+solve(nums, idx+2, dp, end),solve(nums, idx+1, dp, end));
        }

        return dp[idx];
    }
};