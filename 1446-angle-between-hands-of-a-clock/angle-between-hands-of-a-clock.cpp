class Solution {
public:
    double angleClock(int hour, int minutes) {

        double res = abs((30 * hour) - (5.5 * minutes));
        return min(res , 360.0 - res);

        // // or 

        // double hourAngle = (hour % 12) * 30 + minutes * 0.5;
        // double minuteAngle = minutes * 6;

        // double result = abs(hourAngle - minuteAngle);
        // return min(result, 360.0 - result);
        
    }
};