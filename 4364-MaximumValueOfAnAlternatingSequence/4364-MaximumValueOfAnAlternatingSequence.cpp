// Last updated: 7/19/2026, 9:37:25 AM
class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        long long mav = s;
        if( n == 1 ) return mav;

        long long maxOddIdx = (n%2 == 0) ? (n-1) : (n-2);

        long long up_jumps = (maxOddIdx + 1)/ 2;
        long long down_jumps = (maxOddIdx - 1)/2;
        long long max_element = mav + (up_jumps * m) - (down_jumps * 1);

        return max_element;
        
    }
};