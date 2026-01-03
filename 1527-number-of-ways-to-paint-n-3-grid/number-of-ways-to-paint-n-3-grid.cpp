class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;

        long long dpA = 6; // Type A for row 1
        long long dpB = 6; // Type B for row 1

        for (int i = 2; i <= n; i++) {
            long long newA = (2 * dpA + 2 * dpB) % MOD;
            long long newB = (2 * dpA + 3 * dpB) % MOD;

            dpA = newA;
            dpB = newB;
        }

        return (dpA + dpB) % MOD;
        
    }
};