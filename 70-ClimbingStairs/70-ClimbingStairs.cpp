// Last updated: 4/16/2026, 12:05:53 AM
class Solution {
public:
    int climbStairs(int n) {
        if ( n <= 2 ) return n;
        int fib1 = 1, fib2 = 2;
        for(int i=3; i<=n; ++i){
            int res = fib1 + fib2;
            fib1 = fib2;
            fib2 = res;
        }
        return fib2;        
    }
};