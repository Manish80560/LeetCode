class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
 
                     // Tinme limit exceed by brute force approach

        // for(int i = 0 ; i < nums.size() ; i++){
        //     for(int j = i + 1; j < nums.size() ; j++){
        //         if(nums[i] == nums[j] && abs(i-j) <= k){
        //             return true;
        //         }
        //     }
        // }
        // return false;


        // another apporac 
        unordered_map<int, int> mp;

for(int i = 0; i < nums.size(); i++){
    if(mp.count(nums[i]) && i - mp[nums[i]] <= k){
        return true;
    }
    mp[nums[i]] = i;
}
return false;
    }
};