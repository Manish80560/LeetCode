class Solution {
public:
    string processStr(string s) {

        string res;

        for(char c : s){
            if(c >= 'a' && c <= 'z'){
                res.push_back(c);
            }else if(c == '*'){
                if(!res.empty())
                res.pop_back();
            }else if(c == '#'){
                res += res;
            }else if(c == '%'){
                reverse(res.begin() , res.end());
            }
        }
        return res;


// for less time

        // int n = s.size();
        // string ans = "";
        // for(char c : s){
        //  if(c >= 'a' && c <= 'z'){
        //     ans.push_back(c);
        //  }

        //  else if(c == '*'){
        //     if(!ans.empty()) ans.pop_back();
        //  }
        //  else if(c=='#'){
        //     ans+=ans;
        //  }else if(c == '%'){
        //     reverse(ans.begin(),ans.end());
        //  }
        // }
        // return ans;
    }
};