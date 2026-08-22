class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 , product = 1;
        int temp = n;
        while(temp > 0){
            int rem = temp % 10;
            sum += rem ;
            product *= rem;
            temp /= 10;
        }

        int res = sum + product;
        // if (res == 0) return false; 
        return n % res == 0;
    }
};