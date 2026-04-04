class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;

        // if( n == 0 || n == 1){
        //     return;
        // }

        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < n - i - 1 ; j++){
                if(nums[j] == 0 && nums[j+1] != 0){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }

            }
        }
        for(int elements : nums){
            System.out.print(elements +" ");
        }        
    }
}