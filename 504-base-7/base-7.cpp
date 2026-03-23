class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

    string result = "";
    bool isNegative = num < 0;

    // work with positive value
    num = abs(num);

    // conversion
    while (num > 0) {
        int remainder = num % 7;
        result = char(remainder + '0') + result; // prepend
        num = num / 7;
    }

    // add sign if negative
    if (isNegative) {
        result = "-" + result;
    }

    return result;
    }
};