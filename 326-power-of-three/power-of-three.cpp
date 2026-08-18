class Solution {
public:
    bool isPowerOfThree(int n) {
        // for base case
        if(n == 1){
            return true;
        }else if(n % 3 != 0 || n <= 0){
            return false;
        }else{
            // for function call till base case
            return isPowerOfThree(n/3);
        }
    }
};