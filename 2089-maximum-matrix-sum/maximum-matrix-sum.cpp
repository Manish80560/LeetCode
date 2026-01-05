class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        
        long long totalAbsoluteSum = 0;
        int negativeElementCount = 0;
        int smallestAbsoluteValue = INT_MAX;

        for (auto &row : matrix) {
            for (int currentElement : row) {

                // Count negative numbers
                if (currentElement < 0) {
                    negativeElementCount++;
                }

                int absoluteValue = abs(currentElement);

                // Add absolute value to total sum
                totalAbsoluteSum += absoluteValue;

                // Track smallest absolute value
                smallestAbsoluteValue = min(smallestAbsoluteValue, absoluteValue);
            }
        }

        // If negative count is odd, one smallest value must stay negative
        if (negativeElementCount % 2 != 0) {
            totalAbsoluteSum -= 2LL * smallestAbsoluteValue;
        }

        return totalAbsoluteSum;
    }
};
