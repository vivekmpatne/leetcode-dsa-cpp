// Last updated: 4/16/2026, 12:05:41 AM
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];


        vector<int> dp(n);

     
        //dp[0] = nums[0];                     // this cal also run
        //dp[1] = max(nums[0], nums[1]);

        int kk = 0;
        dp[0] = max(nums[0], kk);
        dp[1] = max(nums[1], max(nums[0], kk));    
        

        for( int i = 2; i<n; i++ ){
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }

        return dp[n-1];
    }
};