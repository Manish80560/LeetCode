class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        // for(int i = 0 ; i < n - 1 ; i++){
        //     for(int j = 0 ; j < n - i - 1 ; j++){
        //         if(nums[j]==0 && nums[j+1] != 0){
        //             swap(nums[j],nums[j+1]);
        //         }
        //     }
        // }

        // for(int ele : nums){
        //     cout<<ele<<" ";
        // }

        int pos = 0;
    
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                // nums[pos] = nums[i];
                swap(nums[pos], nums[i]);
                pos++;
            }
        }

        // while(pos < n){
        //     nums[pos] = 0;
        //     pos++;
        // }
    }
};