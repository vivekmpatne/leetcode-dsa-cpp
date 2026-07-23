// Last updated: 7/23/2026, 10:07:00 PM
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;
        int mask = 0;
        for(int num : nums){
            mask = mask | num;
        }
        return mask + 1;
    }
};