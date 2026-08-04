// Last updated: 8/4/2026, 8:07:27 AM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();

        int st = nums[0];
        int end = nums[n-1];

        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            freq[nums[i]];
        }

        for(int i=st; i<=end; i++){
            if( freq.find(i) == freq.end() ){
                ans.push_back(i);
            }
        }

        return ans;
    }
};