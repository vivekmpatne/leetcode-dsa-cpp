// Last updated: 5/11/2026, 11:20:08 PM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int num  = nums[i];
            vector<int> temp;
            
            while(num > 0 ){
               temp.push_back(num%10);
               num /= 10;
            }

            for(int j=temp.size()-1; j>= 0; j--){
                ans.push_back(temp[j]);
            }

        }

        return ans;
    }
};