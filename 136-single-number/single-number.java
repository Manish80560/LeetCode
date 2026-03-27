class Solution {
    public int singleNumber(int[] nums) {
        // for(int i = 0 ; i < nums.length ; i++){
        //     for(int j = i+1 ; j < nums.length ; j++){
        //         if(nums[i] != nums[j] || nums[j] != nums[i]){
        //             return nums[i];
        //         }
        //     }
        // }
        // return 1;
        int ans = 0;
        for(int num : nums){
            ans = ans ^ num;
        }
        return ans;
    }
}