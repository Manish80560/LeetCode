class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());

        // int ans = nums[0];

        // for(int i = 0 ; i < n ; i++){
        //     if(ans < nums[i]) 
        //     ans = nums[i];
        // }
        // return ans;

        return nums[n/2];
    }
};