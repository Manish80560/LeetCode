class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> helper;

        sort(candidates.begin(), candidates.end());
        solve(candidates, target, ans, 0, helper);
        return ans;
    }

   
    void solve(vector<int>& candidates,int target,vector<vector<int>>& ans,int idx,vector<int>& helper) {

        if (target == 0) {
            ans.push_back(helper);
            return;
        }

        if (idx == candidates.size()) {
            return;
        }

        if (candidates[idx] > target) {
            return;
        }

        // INCLUDE
        helper.push_back(candidates[idx]);
        solve(candidates,target - candidates[idx],ans,idx + 1,helper);

        // BACKTRACK
        helper.pop_back();

        // EXCLUDE
        // Skip duplicate values
        int next = idx + 1;

        while (next < candidates.size() && candidates[next] == candidates[idx]) {
            next++;
        }
        solve(candidates,target,ans,next,helper);
    }
};