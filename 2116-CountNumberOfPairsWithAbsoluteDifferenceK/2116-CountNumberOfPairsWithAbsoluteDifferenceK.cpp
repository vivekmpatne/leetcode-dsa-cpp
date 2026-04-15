// Last updated: 4/16/2026, 12:04:53 AM
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {

        // now approch 3 ( counting sort ) becouse 1 <= nums[i] <= 100
        vector<int> frq(101, 0);
        for(int num : nums){
            frq[num]++;
        }
        int cnt = 0;
        for(int i=1; i<=100-k; ++i){
            cnt += frq[i] * frq[i+k];
        }
        return cnt;

        // approch 2 = hash map


        // int cnt = 0;
        // for(int i=0; i<nums.size(); ++i){
        //     for(int j=i+1; j<nums.size(); ++j){
        //         if( abs(nums[i] - nums[j]) == k ) cnt++;
        //     }
        // }
        // return cnt;
    }
};