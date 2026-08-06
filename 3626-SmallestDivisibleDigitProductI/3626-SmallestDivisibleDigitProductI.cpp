// Last updated: 8/6/2026, 8:59:47 PM
class Solution {
public:

    int product_digit(int x){
        int ans = 1, d = 0;
        for( ; x; x /= 10){
            d = x%10;
            ans *= d;
        }
        return ans;
    }

    int smallestNumber(int n, int t) {
        for(int i = n; i< n+10; i++){
            if( product_digit(i) % t == 0) return i;
        }
        return 0;
    }
};