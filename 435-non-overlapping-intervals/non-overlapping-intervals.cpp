class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int i = 0, j = 1, count = 0;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        while(j < n){
            int firstStart = intervals[i][0];
            int firstEnd = intervals[i][1];

            int secondStart = intervals[j][0];
            int secondEnd = intervals[j][1];

            if(firstEnd <= secondStart){
                i = j;
                j++;
                
            }else{
                if(firstEnd >= secondEnd){
                    i = j;
                    j++;
                    // if deleted then increase count;
                    count++;
                }else{
                    j++;
                    count++;
                }
            }
        }
        return count;
    }
};