// Last updated: 4/16/2026, 12:01:02 AM
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1_sum = 0, num2_sum = 0;
        int diff = 0;
        for(int i=1; i<=n; ++i){
            if( i%m != 0 ){
                num1_sum += i;
            }else{
                num2_sum += i;
            }
        }
        diff = num1_sum - num2_sum;
        return diff;
    }
};