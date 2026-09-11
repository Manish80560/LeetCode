class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int>arr;

        printCombination(1 , arr , ans , n , k);
        return ans;
    }

    void printCombination(int start , vector<int>& arr , vector<vector<int>>& ans , int n , int k){

        if(start > n + 1){
            return ;
        }

        if(arr.size() == k){
            ans.push_back(arr);
            return;
        }

        arr.push_back(start);
        printCombination(start + 1 , arr , ans , n , k);

        arr.pop_back();
        printCombination(start + 1 , arr , ans , n , k);

    }
};