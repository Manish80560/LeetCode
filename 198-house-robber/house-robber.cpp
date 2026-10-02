class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp (n+1, -1);
        return solve(nums, 0, dp);

    }

    int solve(vector<int>& arr , int idx, vector<int>& dp){

    if(idx >= arr.size()){
        return 0;
    }

    if(dp[idx] == -1){
        dp[idx] =  max(arr[idx]+solve(arr , idx+2, dp) , solve(arr , idx+1, dp));
    }

    return dp[idx];
}
};