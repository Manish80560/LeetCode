class Solution {
public:
    void generate(vector<int>& nums , int idx , vector<vector<int>>& ans , vector<int>& helper){
        if(idx == nums.size()){
            ans.push_back(helper);
            return;
        }

        // take
        helper.push_back(nums[idx]);
        generate(nums , idx + 1 , ans , helper);

        //backtrack
        helper.pop_back();

        // dont take
        generate(nums , idx + 1 , ans , helper);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>>ans;
        vector<int> helper;

        generate(nums , 0 , ans , helper);
        return ans;
        
    }
};