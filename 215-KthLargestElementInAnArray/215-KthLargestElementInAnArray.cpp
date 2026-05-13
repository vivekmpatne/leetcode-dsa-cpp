// Last updated: 5/13/2026, 11:48:16 PM
// #include <vector>
// #include <cstdlib>
// #include <algorithm>

class Solution {
    public:
    int findKthLargest(vector<int>& nums, int k) {
           std::nth_element(nums.begin(), nums.begin() + nums.size() - k, nums.end());

           return nums[nums.size() - k];
    }
};