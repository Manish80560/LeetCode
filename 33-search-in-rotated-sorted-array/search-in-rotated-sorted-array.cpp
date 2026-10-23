class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        // this is for O(n) time complexity
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i] == target) return i;
        // }
        // return -1;

        // for O(log n) time complexity

        int low = 0, high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            } 
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};