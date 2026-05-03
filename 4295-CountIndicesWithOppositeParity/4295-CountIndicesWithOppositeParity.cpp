// Last updated: 5/3/2026, 5:51:45 PM
class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n  = nums.size();
         vector<int> ans(n, 0);
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=i+1; j<n; j++){
                if( (nums[i]%2 == 0 && nums[j]%2 != 0) || (nums[i]%2 != 0 && nums[j]%2 == 0 ) ){
                    cnt++;
                }
            }
           
           ans[i] = cnt;
        }

        return ans;
    }
};