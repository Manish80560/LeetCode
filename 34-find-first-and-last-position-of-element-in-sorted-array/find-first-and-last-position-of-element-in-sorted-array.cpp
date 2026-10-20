class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0 , high = n - 1;
        int firstOccurance = -1, lastOccurance = -1;

        // for the firstOccurance 
        while(low <= high){
            int mid = low+(high - low)/2;

            if(nums[mid] == target){
                firstOccurance = mid;
                high = mid - 1;
            }else if(nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }



        // for the secondOccurance
        low = 0, high = n - 1;
        while(low <= high){
            int mid = low+(high - low)/2;

            if(nums[mid] == target){
               lastOccurance = mid;
                low = mid + 1;
            }else if(nums[mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return {firstOccurance , lastOccurance};
        // total time complexity = O(log n)+ O(log n) = 2*O(log n) == O(log n);
    }
};