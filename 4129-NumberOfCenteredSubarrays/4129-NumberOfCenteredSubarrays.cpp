// Last updated: 4/16/2026, 12:00:54 AM
class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int l=0; l<n; ++l){
            unordered_map<int, int> freq;
            int sum = 0;

            for(int r = l;  r < n; r++){
                sum += nums[r];
                freq[nums[r]]++;
                if(freq.count(sum)) ans++;
            }
        }
        return ans;
    }
};