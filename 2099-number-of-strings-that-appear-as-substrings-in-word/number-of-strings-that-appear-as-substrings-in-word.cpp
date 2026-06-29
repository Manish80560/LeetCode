class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(string &re : patterns){
            if(word.find(re) != string::npos)
            count++;
        }
        return count;
    }
};