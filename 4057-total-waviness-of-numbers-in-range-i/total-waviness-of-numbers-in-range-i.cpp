class Solution {
public :
    int waviness(int num) {
        string s = to_string(num);

        int count = 0;

        for (int i = 1; i < s.size() - 1; i++) {
            int prev = s[i - 1] - '0';
            int curr = s[i] - '0';
            int next = s[i + 1] - '0';

            if ((curr > prev && curr > next) ||
                (curr < prev && curr < next))
                count++;
        }

        return count;
    }

    int totalWaviness(int num1, int num2) {
        int ans = 0;

        for (int i = num1; i <= num2; i++) {
            ans += waviness(i);
        }

        return ans;
    }
};