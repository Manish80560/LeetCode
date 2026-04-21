class Solution {
public:
    int maxDistance(vector<int>& A) {

        int n = A.size();
        int maxDistance = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                if(A[i] != A[j])
                 maxDistance = max(maxDistance , j - i);
            }
        }
        return maxDistance;
    }
};