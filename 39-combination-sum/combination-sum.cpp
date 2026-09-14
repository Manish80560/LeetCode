class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>> ans;

        solve(candidates, target, 0, current, ans);
        return ans;

    }

    void solve(vector<int>& candidates, int target , int index , vector<int>& current, vector<vector<int>>& ans){

        if(target == 0){
            ans.push_back(current);
            return;
        }

        if (index == candidates.size()) {
            return;
        }

        if (candidates[index] > target) {
            solve(candidates, target, index + 1, current, ans);
            return;
        }

        // Take
        current.push_back(candidates[index]);
        solve(candidates,target - candidates[index],index,current,ans);

        // Backtrack
        current.pop_back();

        //Dont Take
        solve(candidates,target,index + 1,current,ans);

    }
};