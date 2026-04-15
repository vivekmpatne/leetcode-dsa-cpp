// Last updated: 4/16/2026, 12:05:12 AM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
       
        int p = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]%2 == 0 ){
                swap(nums[i], nums[p]);
                p++;
            }
        }
        return nums;
    }
};