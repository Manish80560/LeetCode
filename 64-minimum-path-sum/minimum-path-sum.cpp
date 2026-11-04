class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));
        return minSum(grid, 0, 0, m, n, dp);
    }

    int minSum(vector<vector<int>>& grid, int row, int col, int m, int n, vector<vector<int>>& dp){

        if(row >= m || col >= n){
            return INT_MAX;
        }

        if(row == m - 1 && col == n - 1){
            return grid[row][col];
        }

        if(dp[row][col] != -1){
            return dp[row][col];
        }

        int right = minSum(grid, row, col+1, m, n, dp);
        int down = minSum(grid, row+1, col, m, n, dp);

        dp[row][col] = grid[row][col] + min(right, down);
        return dp[row][col];
    }
};