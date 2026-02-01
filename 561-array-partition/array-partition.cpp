class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int sum = 0;

        // for (int i = 0; i < nums.size(); i += 2) {
        //     sum += nums[i];
        // }

        // return sum;

         sort(nums.begin(),nums.end());
        if(nums.size()==2) return min(nums[0],nums[1]);
        int ans =0;
        for(int i=0;i<nums.size()-1;i++){
            int current = nums[i];
            int next = nums[i+1];
            ans += min(current,next);
            i++;
        }
        return ans;
    }
};