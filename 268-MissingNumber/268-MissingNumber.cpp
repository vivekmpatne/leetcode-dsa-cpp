// Last updated: 4/16/2026, 12:05:36 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = n*(n+1)/2, sum2 = 0;
        for(int i=0; i<n; ++i){
            sum2 += nums[i];
        }
        int missNum = sum1 - sum2;        
        return missNum;
    }
};