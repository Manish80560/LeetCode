class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.length();
        
        queue<int> q;
        q.push(0);

        vector<bool> visited(n, false);
        visited[0] = true;

        int farthest = 0;

        while (!q.empty()) {

            int current = q.front();
            q.pop();

           
            int start = max(current + minJump, farthest + 1);
            int end = min(current + maxJump, n - 1);

            for (int i = start; i <= end; i++) {

                if (s[i] == '0' && !visited[i]) {

                    if (i == n - 1)
                        return true;

                    visited[i] = true;
                    q.push(i);
                }
            }

            farthest = end;
        }

        return (n == 1);
        
    }
};