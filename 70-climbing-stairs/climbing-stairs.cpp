class Solution {
public:
    int climbStairs(int n) {
        // if(n <= 2){
        //     return n;
        // }
        // int first = 1 , second = 2;

        // for(int i = 3 ; i <= n ; i++){
        //     int next = first + second;
        //     first = second;
        //     second = next;
        // }
        // return second;

        vector<int> dp(n + 1 , -1);

        return solve(n , dp);
    }

    int solve(int n , vector<int>& dp){

        if(n <= 2){
            return n;
        }

        if(dp[n] == -1){
            dp[n] = solve(n - 1 , dp) + solve(n - 2 , dp); 
        }
        return dp[n];
    }
};