// Last updated: 4/16/2026, 12:04:54 AM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(nums.size()*2);

        ans.insert(ans.end(), nums.begin(), nums.end());
        ans.insert(ans.end(), nums.begin(), nums.end());

        return ans;
        // int n = nums.size();
        // vector<int> ans;
        // for(int i=0; i<n; ++i){
        //     ans.push_back(nums[i]);
        // }
        //  for(int i=0; i<n; ++i){
        //     ans.push_back(nums[i]);
        // }
        // return ans;
    }
};