class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        int maxSquareArea = 0;
        // Check every cell as a possible starting point
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                maxSquareArea = max(maxSquareArea, maxArea(matrix, i, j, m, n, dp));
            }
        }

        // Return the area of the maximal square
        return maxSquareArea * maxSquareArea;
    }

    int maxArea(vector<vector<char>>& matrix, int row, int col, int m, int n, vector<vector<int>>& dp){

        if(row >= m || col >= n){
            return 0;
        }

        if(matrix[row][col] == '0'){
            return 0;
        }


        if(dp[row][col] != -1){
            return dp[row][col];
        }

        int right = maxArea(matrix, row, col+1, m, n, dp);
        int down = maxArea(matrix, row+1, col, m, n, dp);
        int diagonal = maxArea(matrix, row+1, col+1, m, n, dp);

        dp[row][col] = 1 + min({right, down, diagonal});
        return dp[row][col];
    }   
};