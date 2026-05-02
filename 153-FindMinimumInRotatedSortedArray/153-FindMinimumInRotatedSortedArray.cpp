// Last updated: 5/2/2026, 11:46:55 PM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i] < min){
                min = nums[i];
            }
        }

        return min;
    }
};