class Solution {
public:
        bool isPrime(int n){
        if(n <= 1)  return false;

        for(int i = 2 ; i * i <= n ; i++){
            if(n % i == 0) return false;
        } 
        return true;
    }
   public:
    int minOperations(vector<int>& nums) {
        int opr = 0;
        for(int i = 0 ; i < nums.size();i++){
            int num = nums[i];
            // int count = 0;

            if(i % 2 == 0){
                while(!isPrime(num)){
                    num++;
                    opr++;
                }
            }else{
                    while(isPrime(num)){
                        num++;
                        opr++;
                    }
                }
            }
        return opr;
    }
};

