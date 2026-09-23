class Solution {
public:
    double myPow(double x, int n) {
        // using built-in method
        // return pow(x, n);

        long long exp = n;

        if (exp < 0) {
            x = 1.0 / x;
            exp = -exp;
        }

        return power(x, exp);
    }

    double power(double x, long long n) {
        // using recursion
        if (n == 0) {
            return 1.0;
        }

        if (n % 2 == 0) {
            double half = power(x, n / 2);
            return half * half;
        } else {
            return x * power(x, n - 1);
        }
    }
};