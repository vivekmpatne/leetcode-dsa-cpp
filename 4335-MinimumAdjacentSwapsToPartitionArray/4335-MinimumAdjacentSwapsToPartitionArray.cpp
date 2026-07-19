// Last updated: 7/19/2026, 9:37:28 AM
class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        vector<int>& arr = nums;

        long long inversions = 0;
        long long cnt1 = 0;
        long long cnt2 = 0;
        long long MOD = 1e9 + 7;

        for(int num : arr){
            if( num < a){
                inversions += (cnt1 + cnt2);
            }else if( num >= a && num <= b){
                cnt1++;
                inversions += cnt2;
            }else{
                cnt2++;
            }
        }

        return inversions % MOD;
    }
};