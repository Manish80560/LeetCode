class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();

        // used to store the ans 
        vector<int>ans(n);
        // count the number of common values form given vector(array)
        int common = 0;

        vector<int> freq(n + 1, 0);

        for(int i = 0 ; i < n ; i++){

            freq[A[i]]++;
            if(freq[A[i]] == 2){
                common++;
            }    

            freq[B[i]]++;
            if(freq[B[i]] == 2){
                common++;
            }   

            ans[i] = common;    
        }
        return ans;
    }
};