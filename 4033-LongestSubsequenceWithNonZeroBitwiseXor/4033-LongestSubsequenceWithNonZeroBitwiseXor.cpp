// Last updated: 8/15/2026, 12:56:39 PM
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int n = nums.size();
        vector<int> zeros(n, 0);

        if( nums == zeros){
            return 0;
        }

        int x = 0;

        for(int num : nums){
            x ^= num;
        }

        return x ? n : n - 1;

        // int sum = 0, n = nums.size();
        // bool all_zero = 1;
        // for(int x : nums ){
        //     sum ^= x;
        //     all_zero &= x == 0;
        // }
        // return (all_zero) ? 0 : n-(sum==0);
    }
};