class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();

        vector<int>re;
        for(int i = 0 ; i < n ; i++){
           // check that n - 1 th or (ith isnot equal to ith +1) 
            if (i == n - 1 || nums[i] != nums[i + 1]) {
                re.push_back(nums[i]);
            } else {
                // If it matches the next element, skip the pair
                i++; 
            }
        }
        return re;

    }
};