// Last updated: 7/25/2026, 11:56:18 AM
class Solution {
public:
    int maxProduct(int n) {
        int first = 0, second = 0;
        while( n > 0){
            int lastDig = n % 10;
            if ( lastDig >= first ){
                second = first;
                first = lastDig;
            }else if( lastDig > second){
                second = lastDig;
            }
            n /= 10;
        }
        return first*second;
    }
};