class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            int num = nums[i];
            int re = 0;

            while(num > 0){
            int rem = num % 10;
            re += rem;
            num /= 10;
        }
            if(re < min)   min = re;
        }
     return min; 
    }
};