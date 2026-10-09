class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> current;
        solve(s, 0, current, ans);
        return ans;
    }
    
    bool isPalindrome(string& s, int left, int right){

        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    void solve(string& s, int idx, vector<string>& current, vector<vector<string>>& ans){

        if(idx == s.size()){
            ans.push_back(current);
            return;
        }

        for(int i = idx ; i < s.size(); i++){
            if(isPalindrome(s, idx, i)){
                current.push_back(s.substr(idx, i-idx+1));
                solve(s, i+1, current, ans);

                current.pop_back();
            }
        }
    }
};