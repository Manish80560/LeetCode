class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        unordered_set<int> result;

        for(int num : nums1){
            set.insert(num);
        }

        for(int num : nums2){
            if(set.find(num) != set.end()){
                result.insert(num);
            }
        }

        vector<int> ans(result.begin(), result.end());
        return ans;
    }
};