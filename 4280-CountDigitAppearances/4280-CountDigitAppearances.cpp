// Last updated: 4/16/2026, 12:00:36 AM
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();

        int cntTwo = 0;
        for(int i=0; i<n; i++){
            int num = nums[i];
            while(num>0){
                int lastDig = num%10;
                if(lastDig == digit){
                    cntTwo++;
                }
                num = num / 10;
            }
        }

        return cntTwo;
    }
};