class Solution {
public:
    int findComplement(int num) {
      int ans = 0;
      int temp = num;
      while (temp > 0) {
          ans = (ans << 1) | 1;
          temp >>= 1;
      }

      return num ^ ans;
    }
};