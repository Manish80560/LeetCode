class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> arr;

          for (int i = 0; i < nums.size(); i++) {

        int n = nums[i];
        int found = -1;

        // Try all possible x values
        for (int x = 0; x <= n; x++) {
            if ( (x | (x + 1)) == n ) {
                found = x;
                break;   // smallest x found
            }
        }

        arr.push_back(found);
    }

    return arr;
    }
};