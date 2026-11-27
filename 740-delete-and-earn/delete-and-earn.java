class Solution {
    public int deleteAndEarn(int[] nums) {
        int max = 0;

        for (int num : nums) {
            max = Math.max(max, num);

        }
        int dp[] = new int[max + 1];
        for (int num : nums) {
            dp[num] += num;
        }

        int prev1 = 0;
        int prev2 = 0;

        for (int i = 0; i <= max; i++) {
            int curr = Math.max(prev1, prev2 + dp[i]);

            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
}