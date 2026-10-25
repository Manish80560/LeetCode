class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();

        // apply the rule as give in the instruction
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i - 1]){
                continue;
            }else{
                nums[i - 1] *= 2;
                nums[i] = 0;
            }
        }

        // zeroes from the final result move to the end
        int pos = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                swap(nums[pos], nums[i]);
                pos++;
            }
        }

        // display the final array's element;
        return nums;
    }
};