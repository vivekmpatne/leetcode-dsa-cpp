// Last updated: 4/16/2026, 12:04:58 AM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int oper = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                int target = nums[i-1] + 1;
                oper += (target - nums[i]);
                nums[i] = target;
            }
        }

        return oper;
    }
};