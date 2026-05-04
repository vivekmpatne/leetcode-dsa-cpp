// Last updated: 5/4/2026, 10:45:12 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
        }

        return mini;
    }
};