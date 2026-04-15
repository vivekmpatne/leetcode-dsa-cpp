// Last updated: 4/16/2026, 12:05:47 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
       
        
        int candidate = 0;
        int count = 0;
        
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }    
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        
        return candidate;

       
        //sort(nums.begin(), nums.end()); 
       // return nums[n/2]; 
    }
};