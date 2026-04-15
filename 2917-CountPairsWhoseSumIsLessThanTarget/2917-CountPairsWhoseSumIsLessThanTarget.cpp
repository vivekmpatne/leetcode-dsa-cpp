// Last updated: 4/16/2026, 12:01:04 AM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();

        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int sum = (nums[i] + nums[j]);
                if(sum < target ) cnt++;
            }
        }
        
        return cnt;
    }
};