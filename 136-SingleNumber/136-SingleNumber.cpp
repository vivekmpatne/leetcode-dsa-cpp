// Last updated: 4/16/2026, 12:05:48 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        for(auto x : nums){
            ans ^= x;
        }

        return ans;
       
        // unordered_map<int, int> mp;
        // for( auto it : nums){
        //     mp[it]++;
        // }
        
        // for(auto it : mp){
        //     if(it.second == 1) {
        //         return it.first;
        //     }
        // }
        // return -1;
    }
};