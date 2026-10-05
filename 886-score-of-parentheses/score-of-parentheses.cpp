class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0 , result = 0;

        for(int i = 0 ; i < s.size();i++){

            if(s[i] == '('){
                depth++;
            }else{
                depth--;

                if(s[i - 1] == '(') {
                    result += (1 << depth);
                }
            }
        }
        return result;
    }
};