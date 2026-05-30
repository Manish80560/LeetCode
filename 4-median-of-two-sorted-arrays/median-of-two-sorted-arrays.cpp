class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int>re;

        for(int i = 0 ; i < m ; i++){
            re.push_back(nums1[i]);
        }

        for(int j = 0 ; j < n ; j++){
            re.push_back(nums2[j]);
        }

        sort(re.begin() , re.end());

        int l = re.size();

        // odd size
        if(l % 2 == 1) {
            return re[l/2];
        }

        // even size
        return (re[l/2] + re[l/2 - 1]) / 2.0;
    }
};