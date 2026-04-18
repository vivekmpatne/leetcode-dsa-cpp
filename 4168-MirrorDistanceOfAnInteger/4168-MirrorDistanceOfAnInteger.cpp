// Last updated: 4/18/2026, 11:08:47 AM
class Solution {
public:
    int reverse( int n ){
        int rev = 0;
        while(n>0){
            int lastDig = n%10;
            rev = lastDig + rev*10;
            n = n/10;
        }
        return rev;
    }
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }
};