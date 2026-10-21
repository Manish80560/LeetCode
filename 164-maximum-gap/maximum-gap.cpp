class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2){
            return 0;
        }

        int maxGap = 0;
        sort(nums.begin(), nums.end());
       
        for(int i = 1 ; i < nums.size(); i++){
            int gap  = nums[i] - nums[i - 1];
            if(gap > maxGap){
                maxGap = gap;
            }
        }
        return maxGap;
    }
};