// Last updated: 6/18/2026, 11:06:35 PM
class Solution {
public:
    double angleClock(int hour, int minutes) {
        float hourAngle = 30 * hour + 0.5 * minutes;

        float minuteAngle = 6 * minutes;

        float diff = abs(hourAngle - minuteAngle);

        float ans = min(diff, 360 - diff);

        return ans;
    }
};