// Last updated: 4/16/2026, 12:05:29 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt_one = 0, maxi = 0;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i] == 1){
                cnt_one++;
                maxi = max(cnt_one, maxi);
            }else{
                cnt_one = 0;
            }
        }
        //maxi = max(cnt_one, maxi);
        return maxi;
    }
};