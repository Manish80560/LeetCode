class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // if target comes 
            if (nums[mid] == target) {
                return mid;
            }
            // if target is greater than mid , goto right
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            // if target is less than mid, goto left
            else {
                right = mid - 1;
            }
        }
        return left;
    }
};
