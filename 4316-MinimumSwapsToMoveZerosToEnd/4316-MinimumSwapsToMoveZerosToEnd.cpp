// Last updated: 5/23/2026, 10:23:41 PM
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int cntSwp = 0;
        int st = 0;
        int end = n-1;
        while (st < end){

            if(nums[st] != 0 ) st++;

            else if(nums[end] == 0) end--;
            
            else{
                swap(nums[st], nums[end]);
                cntSwp++;
                st++;
                end--;
            }
        }

        return cntSwp;
    }
};