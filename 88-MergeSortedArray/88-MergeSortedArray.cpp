// Last updated: 4/16/2026, 12:05:51 AM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i=0; i<n; i++){
            nums1[ m + i ] = nums2[i];
       }
       sort(nums1.begin(), nums1.end());
    }
};