class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Edge case: if there's only one or zero intervals, no merging is needed
        if (intervals.size() <= 1) {
            return intervals;
        }

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> mergedIntervals;
  
        mergedIntervals.push_back(intervals[0]);

    
        for (int i = 1; i < intervals.size(); i++) {
           
            vector<int>& lastMerged = mergedIntervals.back();

            if (intervals[i][0] <= lastMerged[1]) {
               
                lastMerged[1] = max(lastMerged[1], intervals[i][1]);
            } else {
               
                mergedIntervals.push_back(intervals[i]);
            }
        }

        return mergedIntervals;
    }
};