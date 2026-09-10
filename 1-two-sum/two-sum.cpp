// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();

//         for(int i = 0 ; i < n ; i++){
//             for(int j = i + 1 ; j < n ; j++){
//                 if(nums[i] + nums[j] == target) return{i , j};
//             }
//         }
//         return{};
//     }
// };


#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numbers;

        for(int i=0; i<nums.size(); ++i){
            int complement = target - nums[i];

            if(numbers.find(complement) != numbers.end()){
                return {numbers[complement], i};
            }

            numbers[nums[i]] = i;
        }

        return {};
    }
};