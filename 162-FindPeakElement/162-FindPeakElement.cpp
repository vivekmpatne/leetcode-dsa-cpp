// Last updated: 5/20/2026, 5:26:12 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int idx = 0;

        int maxEle = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxEle){
                maxEle = nums[i];
                idx = i;
            }
        }

        return idx;
    }
};