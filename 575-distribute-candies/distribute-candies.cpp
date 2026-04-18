class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> st (candyType.begin() , candyType.end());
        int n = candyType.size();
        int m = st.size();

        return min(m , n/2);
        
    }
};