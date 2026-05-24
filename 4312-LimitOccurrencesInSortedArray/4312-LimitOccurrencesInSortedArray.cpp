// Last updated: 5/24/2026, 11:42:51 AM
class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        
        int n =  nums.size();
        vector<int> ans;

        unordered_map<int, int> freq;
        for( int num : nums){
            if(freq[num] < k){
                ans.push_back(num);
                freq[num]++;
            }
        }


        return ans;
        
    }
};