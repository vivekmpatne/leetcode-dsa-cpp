// Last updated: 8/2/2026, 3:10:59 AM
class Solution {
public:
    int reverse(int n) {
        long long rev  = 0, lstDig = 0;
        while ( n != 0 ){
            lstDig = n % 10;
            if ( rev > INT_MAX/10 || rev < INT_MIN/10 ) return 0;
            rev = rev*10 + lstDig;
            n /= 10;
        }
        return rev;
    }
};