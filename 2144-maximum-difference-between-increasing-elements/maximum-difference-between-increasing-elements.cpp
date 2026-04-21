class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        
        int maxDifference = -1;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(nums[j] > nums[i]){
                    maxDifference = max(maxDifference , nums[j] - nums[i]);
                }
            }
        }
        return maxDifference;
    }
};