// Last updated: 4/16/2026, 12:05:49 AM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> present, checked;
        for(auto a : nums){
            present[a] = true;
        }
        int longestConChain = 0;
        for(auto a : nums){
            if(!checked[a] && !present[a-1]){
                int currChain = 0;
                int start = a;
                while(present[start]){
                    currChain++;
                    checked[start] = true;
                    start++;
                }
                longestConChain = max(longestConChain, currChain);
            }
        }
        return longestConChain;
    }
};