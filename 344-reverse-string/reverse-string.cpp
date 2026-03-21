class Solution {
public:
    void reverseString(vector<char>& s) {

        // reverse(s.begin() , s.end());

            // OR

        // int n = s.size();
        // for(int i = 0 ; i < n/2 ; i++){
        //     swap(s[i],s[n-i-1]);
        // }


        // OR

        int i = 0;
        int j = s.size() - 1;

        while(i < j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
    }
};