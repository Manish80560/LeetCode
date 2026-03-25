class Solution {
public:
    bool isPalindrome(int x) {

        int org = x;
        
        // int rem ;
        // long long ans = 0;
        // if(x < 0){
        //     return false;
        // }

        // while(org > 0){
        //     rem = org % 10;
        //     ans = ans * 10 + rem;
        //     org /= 10;  
        // }
        // return (ans == x);

        string s = to_string(x);   // convert int → string
        string rev = s;

        reverse(rev.begin(), rev.end());  // reverse string

        return s == rev;
        
    }
};