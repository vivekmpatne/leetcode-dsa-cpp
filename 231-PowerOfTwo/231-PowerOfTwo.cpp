// Last updated: 4/16/2026, 12:05:40 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //return n > 0 && (n & (long)n - 1) == 0;
        if (n <= 0) return false;
        
        long power = 1; // Start at 2^0
        while (power < n) {
            power *= 2; // Keep doubling
        }
        
        return power == n;
    }
};