// Last updated: 4/16/2026, 12:05:25 AM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int cnt = 0;

        for(int i = 0; i<nums.size(); ++i){
            int sum = 0;
            for(int j=i; j<nums.size(); ++j){
                sum += nums[j];
                if(sum == k ) cnt++;
            }
        }
        return cnt;

        // unordered_map<int, int> freq;
        // freq[0] = 1;
        // int preSum = 0, cnt = 0;
        // for(int j=0; j<nums.size(); j++){
        //     preSum += nums[j];
        //     int x = preSum - k;
        //     if(freq.find(x) != freq.end()){
        //         cnt += freq[x];
        //     }
        //     freq[preSum]++;
        // }
        // return cnt;
    }
};