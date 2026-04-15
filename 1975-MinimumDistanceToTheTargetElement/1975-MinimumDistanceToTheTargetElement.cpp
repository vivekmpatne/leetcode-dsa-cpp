// Last updated: 4/16/2026, 12:04:56 AM
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        int n = nums.size();
        int mini = 1e9;
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                int val = abs(i - start );
                mini = min(val, mini);
            }
        }

        return mini;
        
    }
};