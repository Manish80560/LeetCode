class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0){
          return false;
        }
         while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;   // returns ture if last num remains 1 else return false
    }
};