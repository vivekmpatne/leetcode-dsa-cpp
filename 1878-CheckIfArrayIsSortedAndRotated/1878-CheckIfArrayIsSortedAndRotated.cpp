// Last updated: 5/23/2026, 9:06:33 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(nums[i] > nums[(i+1)%n]){
                cnt++;
            }
        }

        // if(cnt == 0 || cnt == 1) return  true;
        // else return false;
        return cnt <= 1;
    }
};