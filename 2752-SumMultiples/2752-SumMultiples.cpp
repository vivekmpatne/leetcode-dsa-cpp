// Last updated: 4/16/2026, 12:01:07 AM
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        int st = 1, e =  n;
        for(int i=st; i<=n; ++i){
            if( i%3 == 0 || i%5 == 0 || i%7 == 0){
                sum += i;
            }
        }
        return sum;
    }
};