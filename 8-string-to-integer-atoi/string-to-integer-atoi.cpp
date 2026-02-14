class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        
        // 1. Skip leading whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // 2. Handle sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }
        
        // 3. Convert digits
        long result = 0;  // use long to detect overflow safely
        
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            
            // 4. Check overflow BEFORE multiplying
            if (result > (LONG_MAX / 10)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            
            // Clamp immediately if out of int range
            if (sign == 1 && result > INT_MAX) {
                return INT_MAX;
            }
            if (sign == -1 && -result < INT_MIN) {
                return INT_MIN;
            }
            
            i++;
        }
        
        return (int)(sign * result);
    }
};
// class Solution {
// public:
//     int myAtoi(string s) {
//         if (s.empty()) {
//             return 0;
//         }
        
//         const long long MAX_INT = INT_MAX;
//         const long long MIN_INT = INT_MIN;
        
//         int i = 0;
//         int n = s.length();
        
//         while (i < n && s[i] == ' ') {
//             i++;
//         }
        
//         if (i == n) {
//             return 0;
//         }
        
//         int sign = 1;
//         if (s[i] == '+') {
//             i++;
//         } else if (s[i] == '-') {
//             sign = -1;
//             i++;
//         }
        
//         long long res = 0;
//         while (i < n && isdigit(s[i])) {
//             int digit = s[i] - '0';
//             res = res * 10 + digit;
            
//             if (sign * res <= INT_MIN) {
//                 return INT_MIN;
//             }
//             if (sign * res >= INT_MAX) {
//                 return INT_MAX;
//             }
            
//             i++;
//         }
        
 
//         return static_cast<int>(res * sign);     
//     }
// };