class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int maxDifference = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(i > j){
                    return -1;
                }else{
                    maxDifference = max(maxDifference , nums[j] - nums[i]);
                }
            }
        }
        if(maxDifference == 0){
            return -1;
        } else{
            return maxDifference;
        } 
        
    }
};