// Last updated: 5/12/2026, 11:19:06 PM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int idx = 0;
        for(int i=0; i<n; i++){
            //ans[idx] = nums[i];
            ans.push_back(nums[i]);
            idx++;
        }
        for(int i=n-1; i>=0; i--){
            ans.push_back(nums[i]);
        }

      return ans;   
    }
};