// Last updated: 4/16/2026, 12:05:55 AM
class Solution {
public:
    int mySqrt(int x) {
        if ( x < 0 ) return -1;
        if ( x == 0 || x == 1) return x;
        double n = x;
        double m = 1;
        double e = 0.000001;

        while(n - m > e){
            n = (n+m)/2;
            m = x/n;
        }

        return n;
    }
};