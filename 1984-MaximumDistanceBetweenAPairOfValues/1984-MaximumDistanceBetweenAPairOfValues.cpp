// Last updated: 4/19/2026, 10:09:05 AM
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       int n1 = nums1.size();
       int n2 = nums2.size();
       int max_dis = 0;

       int i = 0, j = 0;

       while ( i < n1 && j < n2){
            if(nums1[i] <= nums2[j]){
                max_dis = max(max_dis, j-i);
                j++;
            }
            else{
                i++;
            }       
       }

       return max_dis;
    }
};