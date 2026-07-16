// Last updated: 7/16/2026, 10:32:20 AM
class Solution {
public:

    int gcd(int a, int b){
        if(b == 0){
            return a;
        }
        return gcd(b, a%b);
    }
    

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        int maxi = 0;

        for(int i=0; i<n; i++){
            maxi = max(maxi, nums[i]);
            prefix[i] = gcd(nums[i], maxi);
        }

        sort(prefix.begin(), prefix.end());

        long long res = 0;
        for(int i=0; i<n/2; i++){
            res += gcd( prefix[i], prefix[n-i-1] );
        }

        return res;
    }
};