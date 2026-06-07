// Last updated: 6/7/2026, 2:34:58 PM
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum = 0;

        int st = max(1, n - k);
        int end = n + k;

        for(int x=st; x <= end; x++){
           // int diff = abs( n - x);
           // int bit = (n & x);
            if( ( n & x ) == 0 ){
                sum += x;
            }    
        }


        return sum;
    }
};