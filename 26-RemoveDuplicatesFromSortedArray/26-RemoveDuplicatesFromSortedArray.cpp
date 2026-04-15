// Last updated: 4/16/2026, 12:06:04 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        // brute
        // std::set<int> unique(nums.begin(), nums.end());
        // int k = 0;
        // for(int x : unique){
        //     nums[k++] = x;
        // }
        // return k;

        // two ptr
        int i=0;
        for(int j=1; j<nums.size(); ++j ){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j]; // move unique to front
            }
        }

        return i+1;

    }
};