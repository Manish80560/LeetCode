class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        if(sum < 1 || sum > 9*num){
            return "";
        }

        string ans = "";

        while(num > 0){
            int lastDigit = min(9, sum);

            ans += to_string(lastDigit);
            sum -= lastDigit;
            num--;
        }
        return sum == 0 ? ans :  "";
    }
};