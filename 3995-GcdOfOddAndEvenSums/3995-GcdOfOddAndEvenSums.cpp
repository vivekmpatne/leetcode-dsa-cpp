// Last updated: 7/15/2026, 11:37:04 PM
#include<numeric>

class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        long long sumOdd = (n*n);
        long long sumEven = (n*(n+1));

        long long ans = gcd( sumOdd, sumEven);




        return ans;
    }
};