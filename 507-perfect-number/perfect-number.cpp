class Solution {
public:
    bool checkPerfectNumber(int num) {

        vector<int> res;
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                res.push_back(i);
            }else{
                continue;
            }
        }

        int sum = 0;
        for(int i = 0; i < res.size(); i++){
            sum += res[i];
        }

        if(sum == num){
            return true;
        }else{
            return false;
        }
    }
};