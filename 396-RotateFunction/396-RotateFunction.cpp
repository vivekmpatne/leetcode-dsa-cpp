// Last updated: 5/2/2026, 12:38:12 AM
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sum = 0; long long n = nums.size();
        long long f = 0;
        
        
        for(int i=0; i<n; i++){
            sum += nums[i];
            f += (long long)i * nums[i];
        }

        long long maxi = f;

        for(int i=1; i<n; i++){
            f = f + sum - n * nums[n-i];
            maxi = max(maxi, f);
        }

        return maxi;
    }
};