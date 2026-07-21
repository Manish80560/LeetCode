// class Solution {
// public:
//     vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
//         int n  = grid.size();
//         vector<int>result;
//         int sum = 0;

//         for(int i = 0 ; i < n ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(grid[i] == grid[j]){
//                     result.push_back(grid[i][j]);
//                 }
//                 sum += grid[i][j];
//             }
//         } 

//         int product = n*(n+1)/2;

//         int re = product - sum;

//         result.push_back(re);
//         return result;
//     }
// };

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> freq(n*n + 1, 0);

        // Count frequency
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                freq[grid[i][j]]++;
            }
        }

        int repeat = -1, missing = -1;

        for(int i = 1; i <= n*n; i++){
            if(freq[i] == 2) repeat = i;
            if(freq[i] == 0) missing = i;
        }

        return {repeat, missing};
    }
};