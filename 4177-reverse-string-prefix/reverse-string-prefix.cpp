class Solution {
public:
    string reversePrefix(string s, int k) {
    //  reverse(s.begin(), s.begin() + k);
    //     return s;

    // using two pointer
        int left = 0, right = k - 1;

        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;

        
    }
};