class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // // using built-in STL function
        // next_permutation(nums.begin(), nums.end());

        // ussing self coded

        int n = nums.size();
        int idx = -1;

        // find the break point
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // if no break point found then simply reverse the whole array
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the just-greater element and swap
        for (int i = n - 1; i > idx; i--) {
            if (nums[i] > nums[idx]) {
                swap(nums[i], nums[idx]);
                break;
            }
        }

        // Reverse the remaining right half
        reverse(nums.begin() + idx + 1, nums.end());
    }
};