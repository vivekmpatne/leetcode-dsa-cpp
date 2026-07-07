// Last updated: 7/7/2026, 11:21:01 AM
class Solution {
public:
    long long sumAndMultiply(int n) {

        if ( n == 0) return 0;

        long long x = 0, sum = 0, multi = 1;
        long long temp = n;

        while ( temp > 0 ){
            long long lstDig = temp%10;
            
            if(lstDig > 0){
                x = ( lstDig * multi ) + x;
                multi *= 10;
                sum += lstDig;
            }

            temp /= 10;
        }
        return x * sum;
    }
};