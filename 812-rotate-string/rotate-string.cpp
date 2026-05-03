class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        
        if(n !=goal.length()) return false;
        return (s + s).find(goal) != string::npos;
        
    }
};