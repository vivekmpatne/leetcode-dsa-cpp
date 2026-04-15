// Last updated: 4/16/2026, 12:00:55 AM
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int dis = 0;
        int mini = INT_MAX;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(  nums[i] == nums[j] && nums[j] == nums[k] ){
                            dis = abs(i-j) + abs(j-k) + abs(k-i);
                            mini = min(mini, dis);
                    }
                }
            }
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};