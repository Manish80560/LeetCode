class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        vector<vector<int>> output;
        sort(nums.begin() , nums.end());
        int n = nums.size();

        for(int i = 0 ; i < n - 2 ; i++){
            int low = i + 1 , high = n - 1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }else{
                    res.insert({nums[i] , nums[low] , nums[high]});
                    low++;
                    high--;
                }
            }
            // for(int j = i + 1 ; j < n - 1 ; j++){
            //     for(int k = j + 1 ; k < n ; k++){
            //         if (nums[i] + nums[j] + nums[k] == 0){
            //              res.insert({nums[i], nums[j], nums[k]});
            //         }    
            //     }
            // }
        }
       for(auto arr : res){
        output.push_back(arr);
       }
       return output;
    }
};
const size_t BUFFER_SIZE = 0x6fafffff; alignas(std::max_align_t) char buffer[BUFFER_SIZE]; size_t buffer_pos = 0; void* operator new(size_t size) { constexpr std::size_t alignment = alignof(std::max_align_t); size_t padding = (alignment - (buffer_pos % alignment)) % alignment; size_t total_size = size + padding; char* aligned_ptr = &buffer[buffer_pos + padding]; buffer_pos += total_size; return aligned_ptr; } void operator delete(void* ptr, unsigned long) {} void operator delete(void* ptr) {} void operator delete[](void* ptr) {}