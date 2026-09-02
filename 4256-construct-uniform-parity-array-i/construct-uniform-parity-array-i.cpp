class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        vector<int>nums2;

        for (int num : nums1){
            if(num % 2 == 0){
                nums2.push_back(num - 1);
            }else{
                nums2.push_back(num);
            }
        }
        
        return true;
    }
};