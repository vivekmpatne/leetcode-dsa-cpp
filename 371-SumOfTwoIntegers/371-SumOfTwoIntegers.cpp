// Last updated: 4/16/2026, 12:05:33 AM
class Solution {
public:
    int getSum(int a, int b) {
        int x = a^b;
        int y = (a&b) << 1;

        while( y != 0){
            int carr = (x&y) << 1;
            x ^= y;
            y = carr;
        }

        return x;
    }
};