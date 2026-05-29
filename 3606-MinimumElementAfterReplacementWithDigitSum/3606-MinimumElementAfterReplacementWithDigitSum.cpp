// Last updated: 5/29/2026, 12:28:10 PM
class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int num = nums[i];
            int sum = 0;
            while(num > 0){
                int lastDig = num%10;
                sum += lastDig;
                num /= 10;
            }
            ans.push_back(sum);
        }

        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            if(ans[i] < mini){
                mini = ans[i];
            }
        }

        return mini;
    }
};